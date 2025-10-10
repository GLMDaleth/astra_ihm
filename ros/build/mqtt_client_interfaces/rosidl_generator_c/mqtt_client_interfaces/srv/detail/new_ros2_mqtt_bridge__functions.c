// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mqtt_client_interfaces:srv/NewRos2MqttBridge.idl
// generated code does not contain a copyright notice
#include "mqtt_client_interfaces/srv/detail/new_ros2_mqtt_bridge__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `ros_topic`
// Member `mqtt_topic`
#include "rosidl_runtime_c/string_functions.h"

bool
mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__init(mqtt_client_interfaces__srv__NewRos2MqttBridge_Request * msg)
{
  if (!msg) {
    return false;
  }
  // ros_topic
  if (!rosidl_runtime_c__String__init(&msg->ros_topic)) {
    mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__fini(msg);
    return false;
  }
  // mqtt_topic
  if (!rosidl_runtime_c__String__init(&msg->mqtt_topic)) {
    mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__fini(msg);
    return false;
  }
  // primitive
  msg->primitive = false;
  // inject_timestamp
  msg->inject_timestamp = false;
  // ros_queue_size
  msg->ros_queue_size = 1ul;
  // mqtt_qos
  msg->mqtt_qos = 0;
  // mqtt_retained
  msg->mqtt_retained = false;
  return true;
}

void
mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__fini(mqtt_client_interfaces__srv__NewRos2MqttBridge_Request * msg)
{
  if (!msg) {
    return;
  }
  // ros_topic
  rosidl_runtime_c__String__fini(&msg->ros_topic);
  // mqtt_topic
  rosidl_runtime_c__String__fini(&msg->mqtt_topic);
  // primitive
  // inject_timestamp
  // ros_queue_size
  // mqtt_qos
  // mqtt_retained
}

bool
mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__are_equal(const mqtt_client_interfaces__srv__NewRos2MqttBridge_Request * lhs, const mqtt_client_interfaces__srv__NewRos2MqttBridge_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ros_topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->ros_topic), &(rhs->ros_topic)))
  {
    return false;
  }
  // mqtt_topic
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mqtt_topic), &(rhs->mqtt_topic)))
  {
    return false;
  }
  // primitive
  if (lhs->primitive != rhs->primitive) {
    return false;
  }
  // inject_timestamp
  if (lhs->inject_timestamp != rhs->inject_timestamp) {
    return false;
  }
  // ros_queue_size
  if (lhs->ros_queue_size != rhs->ros_queue_size) {
    return false;
  }
  // mqtt_qos
  if (lhs->mqtt_qos != rhs->mqtt_qos) {
    return false;
  }
  // mqtt_retained
  if (lhs->mqtt_retained != rhs->mqtt_retained) {
    return false;
  }
  return true;
}

bool
mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__copy(
  const mqtt_client_interfaces__srv__NewRos2MqttBridge_Request * input,
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // ros_topic
  if (!rosidl_runtime_c__String__copy(
      &(input->ros_topic), &(output->ros_topic)))
  {
    return false;
  }
  // mqtt_topic
  if (!rosidl_runtime_c__String__copy(
      &(input->mqtt_topic), &(output->mqtt_topic)))
  {
    return false;
  }
  // primitive
  output->primitive = input->primitive;
  // inject_timestamp
  output->inject_timestamp = input->inject_timestamp;
  // ros_queue_size
  output->ros_queue_size = input->ros_queue_size;
  // mqtt_qos
  output->mqtt_qos = input->mqtt_qos;
  // mqtt_retained
  output->mqtt_retained = input->mqtt_retained;
  return true;
}

mqtt_client_interfaces__srv__NewRos2MqttBridge_Request *
mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Request * msg = (mqtt_client_interfaces__srv__NewRos2MqttBridge_Request *)allocator.allocate(sizeof(mqtt_client_interfaces__srv__NewRos2MqttBridge_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mqtt_client_interfaces__srv__NewRos2MqttBridge_Request));
  bool success = mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__destroy(mqtt_client_interfaces__srv__NewRos2MqttBridge_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence__init(mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Request * data = NULL;

  if (size) {
    data = (mqtt_client_interfaces__srv__NewRos2MqttBridge_Request *)allocator.zero_allocate(size, sizeof(mqtt_client_interfaces__srv__NewRos2MqttBridge_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence__fini(mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence *
mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence * array = (mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence *)allocator.allocate(sizeof(mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence__destroy(mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence__are_equal(const mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence * lhs, const mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence__copy(
  const mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence * input,
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mqtt_client_interfaces__srv__NewRos2MqttBridge_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mqtt_client_interfaces__srv__NewRos2MqttBridge_Request * data =
      (mqtt_client_interfaces__srv__NewRos2MqttBridge_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__init(mqtt_client_interfaces__srv__NewRos2MqttBridge_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__fini(mqtt_client_interfaces__srv__NewRos2MqttBridge_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__are_equal(const mqtt_client_interfaces__srv__NewRos2MqttBridge_Response * lhs, const mqtt_client_interfaces__srv__NewRos2MqttBridge_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__copy(
  const mqtt_client_interfaces__srv__NewRos2MqttBridge_Response * input,
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

mqtt_client_interfaces__srv__NewRos2MqttBridge_Response *
mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Response * msg = (mqtt_client_interfaces__srv__NewRos2MqttBridge_Response *)allocator.allocate(sizeof(mqtt_client_interfaces__srv__NewRos2MqttBridge_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mqtt_client_interfaces__srv__NewRos2MqttBridge_Response));
  bool success = mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__destroy(mqtt_client_interfaces__srv__NewRos2MqttBridge_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence__init(mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Response * data = NULL;

  if (size) {
    data = (mqtt_client_interfaces__srv__NewRos2MqttBridge_Response *)allocator.zero_allocate(size, sizeof(mqtt_client_interfaces__srv__NewRos2MqttBridge_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence__fini(mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence *
mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence * array = (mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence *)allocator.allocate(sizeof(mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence__destroy(mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence__are_equal(const mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence * lhs, const mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence__copy(
  const mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence * input,
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mqtt_client_interfaces__srv__NewRos2MqttBridge_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mqtt_client_interfaces__srv__NewRos2MqttBridge_Response * data =
      (mqtt_client_interfaces__srv__NewRos2MqttBridge_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "mqtt_client_interfaces/srv/detail/new_ros2_mqtt_bridge__functions.h"

bool
mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__init(mqtt_client_interfaces__srv__NewRos2MqttBridge_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__fini(msg);
    return false;
  }
  // request
  if (!mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence__init(&msg->request, 0)) {
    mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__fini(msg);
    return false;
  }
  // response
  if (!mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence__init(&msg->response, 0)) {
    mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__fini(msg);
    return false;
  }
  return true;
}

void
mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__fini(mqtt_client_interfaces__srv__NewRos2MqttBridge_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence__fini(&msg->request);
  // response
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence__fini(&msg->response);
}

bool
mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__are_equal(const mqtt_client_interfaces__srv__NewRos2MqttBridge_Event * lhs, const mqtt_client_interfaces__srv__NewRos2MqttBridge_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__copy(
  const mqtt_client_interfaces__srv__NewRos2MqttBridge_Event * input,
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

mqtt_client_interfaces__srv__NewRos2MqttBridge_Event *
mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Event * msg = (mqtt_client_interfaces__srv__NewRos2MqttBridge_Event *)allocator.allocate(sizeof(mqtt_client_interfaces__srv__NewRos2MqttBridge_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mqtt_client_interfaces__srv__NewRos2MqttBridge_Event));
  bool success = mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__destroy(mqtt_client_interfaces__srv__NewRos2MqttBridge_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__Sequence__init(mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Event * data = NULL;

  if (size) {
    data = (mqtt_client_interfaces__srv__NewRos2MqttBridge_Event *)allocator.zero_allocate(size, sizeof(mqtt_client_interfaces__srv__NewRos2MqttBridge_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__Sequence__fini(mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__Sequence *
mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__Sequence * array = (mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__Sequence *)allocator.allocate(sizeof(mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__Sequence__destroy(mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__Sequence__are_equal(const mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__Sequence * lhs, const mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__Sequence__copy(
  const mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__Sequence * input,
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mqtt_client_interfaces__srv__NewRos2MqttBridge_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mqtt_client_interfaces__srv__NewRos2MqttBridge_Event * data =
      (mqtt_client_interfaces__srv__NewRos2MqttBridge_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
