// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mqtt_client_interfaces:srv/NewRos2MqttBridge.idl
// generated code does not contain a copyright notice

#ifndef MQTT_CLIENT_INTERFACES__SRV__DETAIL__NEW_ROS2_MQTT_BRIDGE__STRUCT_HPP_
#define MQTT_CLIENT_INTERFACES__SRV__DETAIL__NEW_ROS2_MQTT_BRIDGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mqtt_client_interfaces__srv__NewRos2MqttBridge_Request __attribute__((deprecated))
#else
# define DEPRECATED__mqtt_client_interfaces__srv__NewRos2MqttBridge_Request __declspec(deprecated)
#endif

namespace mqtt_client_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NewRos2MqttBridge_Request_
{
  using Type = NewRos2MqttBridge_Request_<ContainerAllocator>;

  explicit NewRos2MqttBridge_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->primitive = false;
      this->inject_timestamp = false;
      this->ros_queue_size = 1ul;
      this->mqtt_qos = 0;
      this->mqtt_retained = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->ros_topic = "";
      this->mqtt_topic = "";
      this->primitive = false;
      this->inject_timestamp = false;
      this->ros_queue_size = 0ul;
      this->mqtt_qos = 0;
      this->mqtt_retained = false;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ros_topic = "";
      this->mqtt_topic = "";
    }
  }

  explicit NewRos2MqttBridge_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ros_topic(_alloc),
    mqtt_topic(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->primitive = false;
      this->inject_timestamp = false;
      this->ros_queue_size = 1ul;
      this->mqtt_qos = 0;
      this->mqtt_retained = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->ros_topic = "";
      this->mqtt_topic = "";
      this->primitive = false;
      this->inject_timestamp = false;
      this->ros_queue_size = 0ul;
      this->mqtt_qos = 0;
      this->mqtt_retained = false;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ros_topic = "";
      this->mqtt_topic = "";
    }
  }

  // field types and members
  using _ros_topic_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ros_topic_type ros_topic;
  using _mqtt_topic_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mqtt_topic_type mqtt_topic;
  using _primitive_type =
    bool;
  _primitive_type primitive;
  using _inject_timestamp_type =
    bool;
  _inject_timestamp_type inject_timestamp;
  using _ros_queue_size_type =
    uint32_t;
  _ros_queue_size_type ros_queue_size;
  using _mqtt_qos_type =
    uint8_t;
  _mqtt_qos_type mqtt_qos;
  using _mqtt_retained_type =
    bool;
  _mqtt_retained_type mqtt_retained;

  // setters for named parameter idiom
  Type & set__ros_topic(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ros_topic = _arg;
    return *this;
  }
  Type & set__mqtt_topic(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mqtt_topic = _arg;
    return *this;
  }
  Type & set__primitive(
    const bool & _arg)
  {
    this->primitive = _arg;
    return *this;
  }
  Type & set__inject_timestamp(
    const bool & _arg)
  {
    this->inject_timestamp = _arg;
    return *this;
  }
  Type & set__ros_queue_size(
    const uint32_t & _arg)
  {
    this->ros_queue_size = _arg;
    return *this;
  }
  Type & set__mqtt_qos(
    const uint8_t & _arg)
  {
    this->mqtt_qos = _arg;
    return *this;
  }
  Type & set__mqtt_retained(
    const bool & _arg)
  {
    this->mqtt_retained = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mqtt_client_interfaces::srv::NewRos2MqttBridge_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mqtt_client_interfaces::srv::NewRos2MqttBridge_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mqtt_client_interfaces::srv::NewRos2MqttBridge_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mqtt_client_interfaces::srv::NewRos2MqttBridge_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mqtt_client_interfaces__srv__NewRos2MqttBridge_Request
    std::shared_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mqtt_client_interfaces__srv__NewRos2MqttBridge_Request
    std::shared_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NewRos2MqttBridge_Request_ & other) const
  {
    if (this->ros_topic != other.ros_topic) {
      return false;
    }
    if (this->mqtt_topic != other.mqtt_topic) {
      return false;
    }
    if (this->primitive != other.primitive) {
      return false;
    }
    if (this->inject_timestamp != other.inject_timestamp) {
      return false;
    }
    if (this->ros_queue_size != other.ros_queue_size) {
      return false;
    }
    if (this->mqtt_qos != other.mqtt_qos) {
      return false;
    }
    if (this->mqtt_retained != other.mqtt_retained) {
      return false;
    }
    return true;
  }
  bool operator!=(const NewRos2MqttBridge_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NewRos2MqttBridge_Request_

// alias to use template instance with default allocator
using NewRos2MqttBridge_Request =
  mqtt_client_interfaces::srv::NewRos2MqttBridge_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mqtt_client_interfaces


#ifndef _WIN32
# define DEPRECATED__mqtt_client_interfaces__srv__NewRos2MqttBridge_Response __attribute__((deprecated))
#else
# define DEPRECATED__mqtt_client_interfaces__srv__NewRos2MqttBridge_Response __declspec(deprecated)
#endif

namespace mqtt_client_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NewRos2MqttBridge_Response_
{
  using Type = NewRos2MqttBridge_Response_<ContainerAllocator>;

  explicit NewRos2MqttBridge_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit NewRos2MqttBridge_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mqtt_client_interfaces::srv::NewRos2MqttBridge_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mqtt_client_interfaces::srv::NewRos2MqttBridge_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mqtt_client_interfaces::srv::NewRos2MqttBridge_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mqtt_client_interfaces::srv::NewRos2MqttBridge_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mqtt_client_interfaces__srv__NewRos2MqttBridge_Response
    std::shared_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mqtt_client_interfaces__srv__NewRos2MqttBridge_Response
    std::shared_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NewRos2MqttBridge_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const NewRos2MqttBridge_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NewRos2MqttBridge_Response_

// alias to use template instance with default allocator
using NewRos2MqttBridge_Response =
  mqtt_client_interfaces::srv::NewRos2MqttBridge_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mqtt_client_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mqtt_client_interfaces__srv__NewRos2MqttBridge_Event __attribute__((deprecated))
#else
# define DEPRECATED__mqtt_client_interfaces__srv__NewRos2MqttBridge_Event __declspec(deprecated)
#endif

namespace mqtt_client_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NewRos2MqttBridge_Event_
{
  using Type = NewRos2MqttBridge_Event_<ContainerAllocator>;

  explicit NewRos2MqttBridge_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit NewRos2MqttBridge_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<mqtt_client_interfaces::srv::NewRos2MqttBridge_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mqtt_client_interfaces::srv::NewRos2MqttBridge_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<mqtt_client_interfaces::srv::NewRos2MqttBridge_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mqtt_client_interfaces::srv::NewRos2MqttBridge_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<mqtt_client_interfaces::srv::NewRos2MqttBridge_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mqtt_client_interfaces::srv::NewRos2MqttBridge_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<mqtt_client_interfaces::srv::NewRos2MqttBridge_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mqtt_client_interfaces::srv::NewRos2MqttBridge_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mqtt_client_interfaces::srv::NewRos2MqttBridge_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const mqtt_client_interfaces::srv::NewRos2MqttBridge_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mqtt_client_interfaces::srv::NewRos2MqttBridge_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mqtt_client_interfaces::srv::NewRos2MqttBridge_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mqtt_client_interfaces__srv__NewRos2MqttBridge_Event
    std::shared_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mqtt_client_interfaces__srv__NewRos2MqttBridge_Event
    std::shared_ptr<mqtt_client_interfaces::srv::NewRos2MqttBridge_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NewRos2MqttBridge_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const NewRos2MqttBridge_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NewRos2MqttBridge_Event_

// alias to use template instance with default allocator
using NewRos2MqttBridge_Event =
  mqtt_client_interfaces::srv::NewRos2MqttBridge_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mqtt_client_interfaces

namespace mqtt_client_interfaces
{

namespace srv
{

struct NewRos2MqttBridge
{
  using Request = mqtt_client_interfaces::srv::NewRos2MqttBridge_Request;
  using Response = mqtt_client_interfaces::srv::NewRos2MqttBridge_Response;
  using Event = mqtt_client_interfaces::srv::NewRos2MqttBridge_Event;
};

}  // namespace srv

}  // namespace mqtt_client_interfaces

#endif  // MQTT_CLIENT_INTERFACES__SRV__DETAIL__NEW_ROS2_MQTT_BRIDGE__STRUCT_HPP_
