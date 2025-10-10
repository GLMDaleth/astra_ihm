// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mqtt_client_interfaces:srv/NewRos2MqttBridge.idl
// generated code does not contain a copyright notice

#ifndef MQTT_CLIENT_INTERFACES__SRV__DETAIL__NEW_ROS2_MQTT_BRIDGE__BUILDER_HPP_
#define MQTT_CLIENT_INTERFACES__SRV__DETAIL__NEW_ROS2_MQTT_BRIDGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mqtt_client_interfaces/srv/detail/new_ros2_mqtt_bridge__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mqtt_client_interfaces
{

namespace srv
{

namespace builder
{

class Init_NewRos2MqttBridge_Request_mqtt_retained
{
public:
  explicit Init_NewRos2MqttBridge_Request_mqtt_retained(::mqtt_client_interfaces::srv::NewRos2MqttBridge_Request & msg)
  : msg_(msg)
  {}
  ::mqtt_client_interfaces::srv::NewRos2MqttBridge_Request mqtt_retained(::mqtt_client_interfaces::srv::NewRos2MqttBridge_Request::_mqtt_retained_type arg)
  {
    msg_.mqtt_retained = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mqtt_client_interfaces::srv::NewRos2MqttBridge_Request msg_;
};

class Init_NewRos2MqttBridge_Request_mqtt_qos
{
public:
  explicit Init_NewRos2MqttBridge_Request_mqtt_qos(::mqtt_client_interfaces::srv::NewRos2MqttBridge_Request & msg)
  : msg_(msg)
  {}
  Init_NewRos2MqttBridge_Request_mqtt_retained mqtt_qos(::mqtt_client_interfaces::srv::NewRos2MqttBridge_Request::_mqtt_qos_type arg)
  {
    msg_.mqtt_qos = std::move(arg);
    return Init_NewRos2MqttBridge_Request_mqtt_retained(msg_);
  }

private:
  ::mqtt_client_interfaces::srv::NewRos2MqttBridge_Request msg_;
};

class Init_NewRos2MqttBridge_Request_ros_queue_size
{
public:
  explicit Init_NewRos2MqttBridge_Request_ros_queue_size(::mqtt_client_interfaces::srv::NewRos2MqttBridge_Request & msg)
  : msg_(msg)
  {}
  Init_NewRos2MqttBridge_Request_mqtt_qos ros_queue_size(::mqtt_client_interfaces::srv::NewRos2MqttBridge_Request::_ros_queue_size_type arg)
  {
    msg_.ros_queue_size = std::move(arg);
    return Init_NewRos2MqttBridge_Request_mqtt_qos(msg_);
  }

private:
  ::mqtt_client_interfaces::srv::NewRos2MqttBridge_Request msg_;
};

class Init_NewRos2MqttBridge_Request_inject_timestamp
{
public:
  explicit Init_NewRos2MqttBridge_Request_inject_timestamp(::mqtt_client_interfaces::srv::NewRos2MqttBridge_Request & msg)
  : msg_(msg)
  {}
  Init_NewRos2MqttBridge_Request_ros_queue_size inject_timestamp(::mqtt_client_interfaces::srv::NewRos2MqttBridge_Request::_inject_timestamp_type arg)
  {
    msg_.inject_timestamp = std::move(arg);
    return Init_NewRos2MqttBridge_Request_ros_queue_size(msg_);
  }

private:
  ::mqtt_client_interfaces::srv::NewRos2MqttBridge_Request msg_;
};

class Init_NewRos2MqttBridge_Request_primitive
{
public:
  explicit Init_NewRos2MqttBridge_Request_primitive(::mqtt_client_interfaces::srv::NewRos2MqttBridge_Request & msg)
  : msg_(msg)
  {}
  Init_NewRos2MqttBridge_Request_inject_timestamp primitive(::mqtt_client_interfaces::srv::NewRos2MqttBridge_Request::_primitive_type arg)
  {
    msg_.primitive = std::move(arg);
    return Init_NewRos2MqttBridge_Request_inject_timestamp(msg_);
  }

private:
  ::mqtt_client_interfaces::srv::NewRos2MqttBridge_Request msg_;
};

class Init_NewRos2MqttBridge_Request_mqtt_topic
{
public:
  explicit Init_NewRos2MqttBridge_Request_mqtt_topic(::mqtt_client_interfaces::srv::NewRos2MqttBridge_Request & msg)
  : msg_(msg)
  {}
  Init_NewRos2MqttBridge_Request_primitive mqtt_topic(::mqtt_client_interfaces::srv::NewRos2MqttBridge_Request::_mqtt_topic_type arg)
  {
    msg_.mqtt_topic = std::move(arg);
    return Init_NewRos2MqttBridge_Request_primitive(msg_);
  }

private:
  ::mqtt_client_interfaces::srv::NewRos2MqttBridge_Request msg_;
};

class Init_NewRos2MqttBridge_Request_ros_topic
{
public:
  Init_NewRos2MqttBridge_Request_ros_topic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NewRos2MqttBridge_Request_mqtt_topic ros_topic(::mqtt_client_interfaces::srv::NewRos2MqttBridge_Request::_ros_topic_type arg)
  {
    msg_.ros_topic = std::move(arg);
    return Init_NewRos2MqttBridge_Request_mqtt_topic(msg_);
  }

private:
  ::mqtt_client_interfaces::srv::NewRos2MqttBridge_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mqtt_client_interfaces::srv::NewRos2MqttBridge_Request>()
{
  return mqtt_client_interfaces::srv::builder::Init_NewRos2MqttBridge_Request_ros_topic();
}

}  // namespace mqtt_client_interfaces


namespace mqtt_client_interfaces
{

namespace srv
{

namespace builder
{

class Init_NewRos2MqttBridge_Response_success
{
public:
  Init_NewRos2MqttBridge_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mqtt_client_interfaces::srv::NewRos2MqttBridge_Response success(::mqtt_client_interfaces::srv::NewRos2MqttBridge_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mqtt_client_interfaces::srv::NewRos2MqttBridge_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mqtt_client_interfaces::srv::NewRos2MqttBridge_Response>()
{
  return mqtt_client_interfaces::srv::builder::Init_NewRos2MqttBridge_Response_success();
}

}  // namespace mqtt_client_interfaces


namespace mqtt_client_interfaces
{

namespace srv
{

namespace builder
{

class Init_NewRos2MqttBridge_Event_response
{
public:
  explicit Init_NewRos2MqttBridge_Event_response(::mqtt_client_interfaces::srv::NewRos2MqttBridge_Event & msg)
  : msg_(msg)
  {}
  ::mqtt_client_interfaces::srv::NewRos2MqttBridge_Event response(::mqtt_client_interfaces::srv::NewRos2MqttBridge_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mqtt_client_interfaces::srv::NewRos2MqttBridge_Event msg_;
};

class Init_NewRos2MqttBridge_Event_request
{
public:
  explicit Init_NewRos2MqttBridge_Event_request(::mqtt_client_interfaces::srv::NewRos2MqttBridge_Event & msg)
  : msg_(msg)
  {}
  Init_NewRos2MqttBridge_Event_response request(::mqtt_client_interfaces::srv::NewRos2MqttBridge_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_NewRos2MqttBridge_Event_response(msg_);
  }

private:
  ::mqtt_client_interfaces::srv::NewRos2MqttBridge_Event msg_;
};

class Init_NewRos2MqttBridge_Event_info
{
public:
  Init_NewRos2MqttBridge_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NewRos2MqttBridge_Event_request info(::mqtt_client_interfaces::srv::NewRos2MqttBridge_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_NewRos2MqttBridge_Event_request(msg_);
  }

private:
  ::mqtt_client_interfaces::srv::NewRos2MqttBridge_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mqtt_client_interfaces::srv::NewRos2MqttBridge_Event>()
{
  return mqtt_client_interfaces::srv::builder::Init_NewRos2MqttBridge_Event_info();
}

}  // namespace mqtt_client_interfaces

#endif  // MQTT_CLIENT_INTERFACES__SRV__DETAIL__NEW_ROS2_MQTT_BRIDGE__BUILDER_HPP_
