import { PanelExtensionContext } from "@foxglove/extension";
import { ReactElement, useEffect, useLayoutEffect, useRef, useState } from "react";
import { createRoot } from "react-dom/client";
// import { IoIosSpeedometer } from "react-icons/io";

const BUFFER_SIZE = 80; // Adjust this to make it more/less smooth

function OdomVelocityPanel({ context }: { context: PanelExtensionContext }): ReactElement {
  const [linearX, setLinearX] = useState(0);
  const [angularZ, setAngularZ] = useState(0);
  const [renderDone, setRenderDone] = useState<(() => void) | undefined>();

  const linearXBuffer = useRef<number[]>([]);
  const angularZBuffer = useRef<number[]>([]);

  const updateAveragedValues = (newLinear: number, newAngular: number) => {
    // Update linear buffer
    linearXBuffer.current.push(newLinear);
    if (linearXBuffer.current.length > BUFFER_SIZE) {
      linearXBuffer.current.shift();
    }

    // Update angular buffer
    angularZBuffer.current.push(newAngular);
    if (angularZBuffer.current.length > BUFFER_SIZE) {
      angularZBuffer.current.shift();
    }

    // Compute averages
    const linearAvg =
      linearXBuffer.current.reduce((sum, val) => sum + val, 0) / linearXBuffer.current.length;
    const angularAvg =
      angularZBuffer.current.reduce((sum, val) => sum + val, 0) / angularZBuffer.current.length;

    setLinearX(parseFloat(linearAvg.toFixed(3)));
    setAngularZ(parseFloat(angularAvg.toFixed(4)));
  };

  useLayoutEffect(() => {
    context.onRender = (renderState, done) => {
      setRenderDone(() => done);

      const msg = renderState.currentFrame?.find(
        (m) => m.topic === "/hardware_interface/odom"
      );

      if (msg) {
        const message = msg.message as any;
        const linear = message?.twist?.twist?.linear?.x ?? 0;
        const angular = message?.twist?.twist?.angular?.z ?? 0;

        updateAveragedValues(linear, angular);
      }
    };

    context.watch("topics");
    context.watch("currentFrame");
    context.subscribe([{ topic: "/hardware_interface/odom" }]);
  }, [context]);

  useEffect(() => {
    renderDone?.();
  }, [renderDone]);

  return (
    <div style={{   position: "sticky",
      top: "0.2rem", // Commence à coller à 1rem du haut
      padding: "0.2rem",
      textAlign: "center",
      color: "#ffffff",
      fontFamily: "sans-serif",
      width: "100%",
      maxWidth: "600px",
      margin: "0 auto",
      maxHeight: "80vh",
      overflowY: "auto"}}>
      <div style={{
        color: "#000000",
        fontWeight: "bold",
        margin: "0rem 0", // Marge verticale très faible, horizontale nulle
        padding: 0, // Pas de padding
      }}>
        Vitesse du Robot
      </div>
      <div
        style={{
          display: "flex",
          justifyContent: "center",
          gap: "1rem",
          marginTop: "1rem",
        }}
      >
        <div style={{   backgroundColor: "#2e2e2e",
        borderRadius: "8px",
        padding: "0.75rem 1rem",
        marginBottom: "0.75rem",
        boxShadow: "0 0 6px rgba(0, 0, 0, 0.3)",
        display: "flex",
        justifyContent: "space-between",
        flexWrap: "wrap", // Permet le retour à la ligne si nécessaire
        gap: "0.2rem", // Espacement entre les éléments
        width: "100%", // Prend toute la largeur disponible
        }}>
          Angulaire : {angularZ} rad/s
        </div>
        <div style={{   backgroundColor: "#2e2e2e",
          borderRadius: "8px",
          padding: "0.75rem 1rem",
          marginBottom: "0.75rem",
          boxShadow: "0 0 6px rgba(0, 0, 0, 0.3)",
          display: "flex",
          justifyContent: "space-between",
          flexWrap: "wrap", // Permet le retour à la ligne si nécessaire
          gap: "0.2rem", // Espacement entre les éléments
          width: "100%", // Prend toute la largeur disponible
          }}>
          Linéaire : {linearX} m/s
        </div>
      </div>
    </div>
  );
}

export function initOdomVelocityPanel(context: PanelExtensionContext): () => void {
  const root = createRoot(context.panelElement);
  root.render(<OdomVelocityPanel context={context} />);

  return () => {
    root.unmount();
  };
}
