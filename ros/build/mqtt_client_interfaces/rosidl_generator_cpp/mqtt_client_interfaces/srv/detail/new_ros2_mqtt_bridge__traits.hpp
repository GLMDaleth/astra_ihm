// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mqtt_client_interfaces:srv/NewRos2MqttBridge.idl
// generated code does not contain a copyright notice

#ifndef MQTT_CLIENT_INTERFACES__SRV__DETAIL__NEW_ROS2_MQTT_BRIDGE__TRAITS_HPP_
#define MQTT_CLIENT_INTERFACES__SRV__DETAIL__NEW_ROS2_MQTT_BRIDGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mqtt_client_interfaces/srv/detail/new_ros2_mqtt_bridge__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mqtt_client_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const NewRos2MqttBridge_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: ros_topic
  {
    out << "ros_topic: ";
    rosidl_generator_traits::value_to_yaml(msg.ros_topic, out);
    out << ", ";
  }

  // member: mqtt_topic
  {
    out << "mqtt_topic: ";
    rosidl_generator_traits::value_to_yaml(msg.mqtt_topic, out);
    out << ", ";
  }

  // member: primitive
  {
    out << "primitive: ";
    rosidl_generator_traits::value_to_yaml(msg.primitive, out);
    out << ", ";
  }

  // member: inject_timestamp
  {
    out << "inject_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.inject_timestamp, out);
    out << ", ";
  }

  // member: ros_queue_size
  {
    out << "ros_queue_size: ";
    rosidl_generator_traits::value_to_yaml(msg.ros_queue_size, out);
    out << ", ";
  }

  // member: mqtt_qos
  {
    out << "mqtt_qos: ";
    rosidl_generator_traits::value_to_yaml(msg.mqtt_qos, out);
    out << ", ";
  }

  // member: mqtt_retained
  {
    out << "mqtt_retained: ";
    rosidl_generator_traits::value_to_yaml(msg.mqtt_retained, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NewRos2MqttBridge_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ros_topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ros_topic: ";
    rosidl_generator_traits::value_to_yaml(msg.ros_topic, out);
    out << "\n";
  }

  // member: mqtt_topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mqtt_topic: ";
    rosidl_generator_traits::value_to_yaml(msg.mqtt_topic, out);
    out << "\n";
  }

  // member: primitive
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "primitive: ";
    rosidl_generator_traits::value_to_yaml(msg.primitive, out);
    out << "\n";
  }

  // member: inject_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "inject_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.inject_timestamp, out);
    out << "\n";
  }

  // member: ros_queue_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ros_queue_size: ";
    rosidl_generator_traits::value_to_yaml(msg.ros_queue_size, out);
    out << "\n";
  }

  // member: mqtt_qos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mqtt_qos: ";
    rosidl_generator_traits::value_to_yaml(msg.mqtt_qos, out);
    out << "\n";
  }

  // member: mqtt_retained
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mqtt_retained: ";
    rosidl_generator_traits::value_to_yaml(msg.mqtt_retained, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NewRos2MqttBridge_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mqtt_client_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mqtt_client_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mqtt_client_interfaces::srv::NewRos2MqttBridge_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mqtt_client_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mqtt_client_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mqtt_client_interfaces::srv::NewRos2MqttBridge_Request & msg)
{
  return mqtt_client_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mqtt_client_interfaces::srv::NewRos2MqttBridge_Request>()
{
  return "mqtt_client_interfaces::srv::NewRos2MqttBridge_Request";
}

template<>
inline const char * name<mqtt_client_interfaces::srv::NewRos2MqttBridge_Request>()
{
  return "mqtt_client_interfaces/srv/NewRos2MqttBridge_Request";
}

template<>
struct has_fixed_size<mqtt_client_interfaces::srv::NewRos2MqttBridge_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mqtt_client_interfaces::srv::NewRos2MqttBridge_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mqtt_client_interfaces::srv::NewRos2MqttBridge_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mqtt_client_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const NewRos2MqttBridge_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NewRos2MqttBridge_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NewRos2MqttBridge_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mqtt_client_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mqtt_client_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mqtt_client_interfaces::srv::NewRos2MqttBridge_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mqtt_client_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mqtt_client_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mqtt_client_interfaces::srv::NewRos2MqttBridge_Response & msg)
{
  return mqtt_client_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mqtt_client_interfaces::srv::NewRos2MqttBridge_Response>()
{
  return "mqtt_client_interfaces::srv::NewRos2MqttBridge_Response";
}

template<>
inline const char * name<mqtt_client_interfaces::srv::NewRos2MqttBridge_Response>()
{
  return "mqtt_client_interfaces/srv/NewRos2MqttBridge_Response";
}

template<>
struct has_fixed_size<mqtt_client_interfaces::srv::NewRos2MqttBridge_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mqtt_client_interfaces::srv::NewRos2MqttBridge_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mqtt_client_interfaces::srv::NewRos2MqttBridge_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace mqtt_client_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const NewRos2MqttBridge_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NewRos2MqttBridge_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NewRos2MqttBridge_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mqtt_client_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mqtt_client_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mqtt_client_interfaces::srv::NewRos2MqttBridge_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  mqtt_client_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mqtt_client_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mqtt_client_interfaces::srv::NewRos2MqttBridge_Event & msg)
{
  return mqtt_client_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mqtt_client_interfaces::srv::NewRos2MqttBridge_Event>()
{
  return "mqtt_client_interfaces::srv::NewRos2MqttBridge_Event";
}

template<>
inline const char * name<mqtt_client_interfaces::srv::NewRos2MqttBridge_Event>()
{
  return "mqtt_client_interfaces/srv/NewRos2MqttBridge_Event";
}

template<>
struct has_fixed_size<mqtt_client_interfaces::srv::NewRos2MqttBridge_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mqtt_client_interfaces::srv::NewRos2MqttBridge_Event>
  : std::integral_constant<bool, has_bounded_size<mqtt_client_interfaces::srv::NewRos2MqttBridge_Request>::value && has_bounded_size<mqtt_client_interfaces::srv::NewRos2MqttBridge_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<mqtt_client_interfaces::srv::NewRos2MqttBridge_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mqtt_client_interfaces::srv::NewRos2MqttBridge>()
{
  return "mqtt_client_interfaces::srv::NewRos2MqttBridge";
}

template<>
inline const char * name<mqtt_client_interfaces::srv::NewRos2MqttBridge>()
{
  return "mqtt_client_interfaces/srv/NewRos2MqttBridge";
}

template<>
struct has_fixed_size<mqtt_client_interfaces::srv::NewRos2MqttBridge>
  : std::integral_constant<
    bool,
    has_fixed_size<mqtt_client_interfaces::srv::NewRos2MqttBridge_Request>::value &&
    has_fixed_size<mqtt_client_interfaces::srv::NewRos2MqttBridge_Response>::value
  >
{
};

template<>
struct has_bounded_size<mqtt_client_interfaces::srv::NewRos2MqttBridge>
  : std::integral_constant<
    bool,
    has_bounded_size<mqtt_client_interfaces::srv::NewRos2MqttBridge_Request>::value &&
    has_bounded_size<mqtt_client_interfaces::srv::NewRos2MqttBridge_Response>::value
  >
{
};

template<>
struct is_service<mqtt_client_interfaces::srv::NewRos2MqttBridge>
  : std::true_type
{
};

template<>
struct is_service_request<mqtt_client_interfaces::srv::NewRos2MqttBridge_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mqtt_client_interfaces::srv::NewRos2MqttBridge_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MQTT_CLIENT_INTERFACES__SRV__DETAIL__NEW_ROS2_MQTT_BRIDGE__TRAITS_HPP_
