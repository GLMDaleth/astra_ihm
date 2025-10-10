// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mqtt_client_interfaces:msg/RosMsgType.idl
// generated code does not contain a copyright notice

#ifndef MQTT_CLIENT_INTERFACES__MSG__DETAIL__ROS_MSG_TYPE__TRAITS_HPP_
#define MQTT_CLIENT_INTERFACES__MSG__DETAIL__ROS_MSG_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mqtt_client_interfaces/msg/detail/ros_msg_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mqtt_client_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RosMsgType & msg,
  std::ostream & out)
{
  out << "{";
  // member: md5
  {
    out << "md5: ";
    rosidl_generator_traits::value_to_yaml(msg.md5, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: definition
  {
    out << "definition: ";
    rosidl_generator_traits::value_to_yaml(msg.definition, out);
    out << ", ";
  }

  // member: stamped
  {
    out << "stamped: ";
    rosidl_generator_traits::value_to_yaml(msg.stamped, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosMsgType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: md5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "md5: ";
    rosidl_generator_traits::value_to_yaml(msg.md5, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: definition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "definition: ";
    rosidl_generator_traits::value_to_yaml(msg.definition, out);
    out << "\n";
  }

  // member: stamped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamped: ";
    rosidl_generator_traits::value_to_yaml(msg.stamped, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosMsgType & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mqtt_client_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mqtt_client_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mqtt_client_interfaces::msg::RosMsgType & msg,
  std::ostream & out, size_t indentation = 0)
{
  mqtt_client_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mqtt_client_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const mqtt_client_interfaces::msg::RosMsgType & msg)
{
  return mqtt_client_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mqtt_client_interfaces::msg::RosMsgType>()
{
  return "mqtt_client_interfaces::msg::RosMsgType";
}

template<>
inline const char * name<mqtt_client_interfaces::msg::RosMsgType>()
{
  return "mqtt_client_interfaces/msg/RosMsgType";
}

template<>
struct has_fixed_size<mqtt_client_interfaces::msg::RosMsgType>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mqtt_client_interfaces::msg::RosMsgType>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mqtt_client_interfaces::msg::RosMsgType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MQTT_CLIENT_INTERFACES__MSG__DETAIL__ROS_MSG_TYPE__TRAITS_HPP_
