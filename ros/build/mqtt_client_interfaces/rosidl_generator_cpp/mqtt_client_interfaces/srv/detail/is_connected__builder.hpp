// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mqtt_client_interfaces:srv/IsConnected.idl
// generated code does not contain a copyright notice

#ifndef MQTT_CLIENT_INTERFACES__SRV__DETAIL__IS_CONNECTED__BUILDER_HPP_
#define MQTT_CLIENT_INTERFACES__SRV__DETAIL__IS_CONNECTED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mqtt_client_interfaces/srv/detail/is_connected__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mqtt_client_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mqtt_client_interfaces::srv::IsConnected_Request>()
{
  return ::mqtt_client_interfaces::srv::IsConnected_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mqtt_client_interfaces


namespace mqtt_client_interfaces
{

namespace srv
{

namespace builder
{

class Init_IsConnected_Response_connected
{
public:
  Init_IsConnected_Response_connected()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mqtt_client_interfaces::srv::IsConnected_Response connected(::mqtt_client_interfaces::srv::IsConnected_Response::_connected_type arg)
  {
    msg_.connected = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mqtt_client_interfaces::srv::IsConnected_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mqtt_client_interfaces::srv::IsConnected_Response>()
{
  return mqtt_client_interfaces::srv::builder::Init_IsConnected_Response_connected();
}

}  // namespace mqtt_client_interfaces


namespace mqtt_client_interfaces
{

namespace srv
{

namespace builder
{

class Init_IsConnected_Event_response
{
public:
  explicit Init_IsConnected_Event_response(::mqtt_client_interfaces::srv::IsConnected_Event & msg)
  : msg_(msg)
  {}
  ::mqtt_client_interfaces::srv::IsConnected_Event response(::mqtt_client_interfaces::srv::IsConnected_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mqtt_client_interfaces::srv::IsConnected_Event msg_;
};

class Init_IsConnected_Event_request
{
public:
  explicit Init_IsConnected_Event_request(::mqtt_client_interfaces::srv::IsConnected_Event & msg)
  : msg_(msg)
  {}
  Init_IsConnected_Event_response request(::mqtt_client_interfaces::srv::IsConnected_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_IsConnected_Event_response(msg_);
  }

private:
  ::mqtt_client_interfaces::srv::IsConnected_Event msg_;
};

class Init_IsConnected_Event_info
{
public:
  Init_IsConnected_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IsConnected_Event_request info(::mqtt_client_interfaces::srv::IsConnected_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_IsConnected_Event_request(msg_);
  }

private:
  ::mqtt_client_interfaces::srv::IsConnected_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mqtt_client_interfaces::srv::IsConnected_Event>()
{
  return mqtt_client_interfaces::srv::builder::Init_IsConnected_Event_info();
}

}  // namespace mqtt_client_interfaces

#endif  // MQTT_CLIENT_INTERFACES__SRV__DETAIL__IS_CONNECTED__BUILDER_HPP_
