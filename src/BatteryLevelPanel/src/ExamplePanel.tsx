import {  PanelExtensionContext } from "@foxglove/extension";
import { ReactElement, useEffect, useLayoutEffect, useState } from "react";
import { createRoot } from "react-dom/client";

function BatteryPanel({ context }: { context: PanelExtensionContext }): ReactElement {
  const [battery, setBattery] = useState(0);
  const [renderDone, setRenderDone] = useState<(() => void) | undefined>();

  useLayoutEffect(() => {
    context.onRender = (renderState, done) => {
      setRenderDone(() => done);
      const msg = renderState.currentFrame?.find((m) => m.topic === "/astra_arduino/roof_box_state");

      if (msg) {
        const message = msg.message as any;
        const rawBattery = message?.roof_box_battery ?? 0;
        const clampedBattery = Math.max(0, Math.min(100, 100*rawBattery));
        setBattery(parseFloat(clampedBattery.toFixed(2)));
      }
    };

    context.watch("topics");
    context.watch("currentFrame");
    context.subscribe([{ topic: "/astra_arduino/roof_box_state" }]);
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
      <h4 style={{
        color: "#000000",
        fontWeight: "bold",
        margin: "0.25rem 0", // Marge verticale très faible, horizontale nulle
        padding: 0, // Pas de padding
      }}>
        Pourcentage Batterie
      </h4>
      <div
        style={{
          width: "100%",
          height: "15px",
          borderRadius: "6px",
          backgroundColor: "#3c3c3c",
          overflow: "hidden",
          border: "1px solid #3c3c3c",
          position: "relative",
        }}
      >
        <div
          style={{
            width: `${battery}%`,
            height: "100%",
            backgroundColor: "#32CD32",
            transition: "width 0.3s ease-in-out",
          }}
        />
        <div
          style={{
            position: "absolute",
            width: "100%",
            height: "100%",
            top: 0,
            left: 0,
            display: "flex",
            alignItems: "center",
            justifyContent: "center",
            color: "#ffffff",
            fontWeight: "bold",
          }}
        >
          {battery.toFixed(0)}%
        </div>
      </div>
    </div>
  );
}

export function initExamplePanel(context: PanelExtensionContext): () => void {
  const root = createRoot(context.panelElement);
  root.render(<BatteryPanel context={context} />);
  // Return a function to run when the panel is removed
  return () => {
    root.unmount();
  };
}
