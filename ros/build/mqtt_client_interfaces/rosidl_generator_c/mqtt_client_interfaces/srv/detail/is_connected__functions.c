// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mqtt_client_interfaces:srv/IsConnected.idl
// generated code does not contain a copyright notice
#include "mqtt_client_interfaces/srv/detail/is_connected__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
mqtt_client_interfaces__srv__IsConnected_Request__init(mqtt_client_interfaces__srv__IsConnected_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
mqtt_client_interfaces__srv__IsConnected_Request__fini(mqtt_client_interfaces__srv__IsConnected_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
mqtt_client_interfaces__srv__IsConnected_Request__are_equal(const mqtt_client_interfaces__srv__IsConnected_Request * lhs, const mqtt_client_interfaces__srv__IsConnected_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
mqtt_client_interfaces__srv__IsConnected_Request__copy(
  const mqtt_client_interfaces__srv__IsConnected_Request * input,
  mqtt_client_interfaces__srv__IsConnected_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

mqtt_client_interfaces__srv__IsConnected_Request *
mqtt_client_interfaces__srv__IsConnected_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mqtt_client_interfaces__srv__IsConnected_Request * msg = (mqtt_client_interfaces__srv__IsConnected_Request *)allocator.allocate(sizeof(mqtt_client_interfaces__srv__IsConnected_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mqtt_client_interfaces__srv__IsConnected_Request));
  bool success = mqtt_client_interfaces__srv__IsConnected_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mqtt_client_interfaces__srv__IsConnected_Request__destroy(mqtt_client_interfaces__srv__IsConnected_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mqtt_client_interfaces__srv__IsConnected_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mqtt_client_interfaces__srv__IsConnected_Request__Sequence__init(mqtt_client_interfaces__srv__IsConnected_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mqtt_client_interfaces__srv__IsConnected_Request * data = NULL;

  if (size) {
    data = (mqtt_client_interfaces__srv__IsConnected_Request *)allocator.zero_allocate(size, sizeof(mqtt_client_interfaces__srv__IsConnected_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mqtt_client_interfaces__srv__IsConnected_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mqtt_client_interfaces__srv__IsConnected_Request__fini(&data[i - 1]);
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
mqtt_client_interfaces__srv__IsConnected_Request__Sequence__fini(mqtt_client_interfaces__srv__IsConnected_Request__Sequence * array)
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
      mqtt_client_interfaces__srv__IsConnected_Request__fini(&array->data[i]);
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

mqtt_client_interfaces__srv__IsConnected_Request__Sequence *
mqtt_client_interfaces__srv__IsConnected_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mqtt_client_interfaces__srv__IsConnected_Request__Sequence * array = (mqtt_client_interfaces__srv__IsConnected_Request__Sequence *)allocator.allocate(sizeof(mqtt_client_interfaces__srv__IsConnected_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mqtt_client_interfaces__srv__IsConnected_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mqtt_client_interfaces__srv__IsConnected_Request__Sequence__destroy(mqtt_client_interfaces__srv__IsConnected_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mqtt_client_interfaces__srv__IsConnected_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mqtt_client_interfaces__srv__IsConnected_Request__Sequence__are_equal(const mqtt_client_interfaces__srv__IsConnected_Request__Sequence * lhs, const mqtt_client_interfaces__srv__IsConnected_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mqtt_client_interfaces__srv__IsConnected_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mqtt_client_interfaces__srv__IsConnected_Request__Sequence__copy(
  const mqtt_client_interfaces__srv__IsConnected_Request__Sequence * input,
  mqtt_client_interfaces__srv__IsConnected_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mqtt_client_interfaces__srv__IsConnected_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mqtt_client_interfaces__srv__IsConnected_Request * data =
      (mqtt_client_interfaces__srv__IsConnected_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mqtt_client_interfaces__srv__IsConnected_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mqtt_client_interfaces__srv__IsConnected_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mqtt_client_interfaces__srv__IsConnected_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
mqtt_client_interfaces__srv__IsConnected_Response__init(mqtt_client_interfaces__srv__IsConnected_Response * msg)
{
  if (!msg) {
    return false;
  }
  // connected
  return true;
}

void
mqtt_client_interfaces__srv__IsConnected_Response__fini(mqtt_client_interfaces__srv__IsConnected_Response * msg)
{
  if (!msg) {
    return;
  }
  // connected
}

bool
mqtt_client_interfaces__srv__IsConnected_Response__are_equal(const mqtt_client_interfaces__srv__IsConnected_Response * lhs, const mqtt_client_interfaces__srv__IsConnected_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // connected
  if (lhs->connected != rhs->connected) {
    return false;
  }
  return true;
}

bool
mqtt_client_interfaces__srv__IsConnected_Response__copy(
  const mqtt_client_interfaces__srv__IsConnected_Response * input,
  mqtt_client_interfaces__srv__IsConnected_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // connected
  output->connected = input->connected;
  return true;
}

mqtt_client_interfaces__srv__IsConnected_Response *
mqtt_client_interfaces__srv__IsConnected_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mqtt_client_interfaces__srv__IsConnected_Response * msg = (mqtt_client_interfaces__srv__IsConnected_Response *)allocator.allocate(sizeof(mqtt_client_interfaces__srv__IsConnected_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mqtt_client_interfaces__srv__IsConnected_Response));
  bool success = mqtt_client_interfaces__srv__IsConnected_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mqtt_client_interfaces__srv__IsConnected_Response__destroy(mqtt_client_interfaces__srv__IsConnected_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mqtt_client_interfaces__srv__IsConnected_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mqtt_client_interfaces__srv__IsConnected_Response__Sequence__init(mqtt_client_interfaces__srv__IsConnected_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mqtt_client_interfaces__srv__IsConnected_Response * data = NULL;

  if (size) {
    data = (mqtt_client_interfaces__srv__IsConnected_Response *)allocator.zero_allocate(size, sizeof(mqtt_client_interfaces__srv__IsConnected_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mqtt_client_interfaces__srv__IsConnected_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mqtt_client_interfaces__srv__IsConnected_Response__fini(&data[i - 1]);
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
mqtt_client_interfaces__srv__IsConnected_Response__Sequence__fini(mqtt_client_interfaces__srv__IsConnected_Response__Sequence * array)
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
      mqtt_client_interfaces__srv__IsConnected_Response__fini(&array->data[i]);
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

mqtt_client_interfaces__srv__IsConnected_Response__Sequence *
mqtt_client_interfaces__srv__IsConnected_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mqtt_client_interfaces__srv__IsConnected_Response__Sequence * array = (mqtt_client_interfaces__srv__IsConnected_Response__Sequence *)allocator.allocate(sizeof(mqtt_client_interfaces__srv__IsConnected_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mqtt_client_interfaces__srv__IsConnected_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mqtt_client_interfaces__srv__IsConnected_Response__Sequence__destroy(mqtt_client_interfaces__srv__IsConnected_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mqtt_client_interfaces__srv__IsConnected_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mqtt_client_interfaces__srv__IsConnected_Response__Sequence__are_equal(const mqtt_client_interfaces__srv__IsConnected_Response__Sequence * lhs, const mqtt_client_interfaces__srv__IsConnected_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mqtt_client_interfaces__srv__IsConnected_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mqtt_client_interfaces__srv__IsConnected_Response__Sequence__copy(
  const mqtt_client_interfaces__srv__IsConnected_Response__Sequence * input,
  mqtt_client_interfaces__srv__IsConnected_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mqtt_client_interfaces__srv__IsConnected_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mqtt_client_interfaces__srv__IsConnected_Response * data =
      (mqtt_client_interfaces__srv__IsConnected_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mqtt_client_interfaces__srv__IsConnected_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mqtt_client_interfaces__srv__IsConnected_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mqtt_client_interfaces__srv__IsConnected_Response__copy(
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
// #include "mqtt_client_interfaces/srv/detail/is_connected__functions.h"

bool
mqtt_client_interfaces__srv__IsConnected_Event__init(mqtt_client_interfaces__srv__IsConnected_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    mqtt_client_interfaces__srv__IsConnected_Event__fini(msg);
    return false;
  }
  // request
  if (!mqtt_client_interfaces__srv__IsConnected_Request__Sequence__init(&msg->request, 0)) {
    mqtt_client_interfaces__srv__IsConnected_Event__fini(msg);
    return false;
  }
  // response
  if (!mqtt_client_interfaces__srv__IsConnected_Response__Sequence__init(&msg->response, 0)) {
    mqtt_client_interfaces__srv__IsConnected_Event__fini(msg);
    return false;
  }
  return true;
}

void
mqtt_client_interfaces__srv__IsConnected_Event__fini(mqtt_client_interfaces__srv__IsConnected_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  mqtt_client_interfaces__srv__IsConnected_Request__Sequence__fini(&msg->request);
  // response
  mqtt_client_interfaces__srv__IsConnected_Response__Sequence__fini(&msg->response);
}

bool
mqtt_client_interfaces__srv__IsConnected_Event__are_equal(const mqtt_client_interfaces__srv__IsConnected_Event * lhs, const mqtt_client_interfaces__srv__IsConnected_Event * rhs)
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
  if (!mqtt_client_interfaces__srv__IsConnected_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!mqtt_client_interfaces__srv__IsConnected_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
mqtt_client_interfaces__srv__IsConnected_Event__copy(
  const mqtt_client_interfaces__srv__IsConnected_Event * input,
  mqtt_client_interfaces__srv__IsConnected_Event * output)
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
  if (!mqtt_client_interfaces__srv__IsConnected_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!mqtt_client_interfaces__srv__IsConnected_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

mqtt_client_interfaces__srv__IsConnected_Event *
mqtt_client_interfaces__srv__IsConnected_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mqtt_client_interfaces__srv__IsConnected_Event * msg = (mqtt_client_interfaces__srv__IsConnected_Event *)allocator.allocate(sizeof(mqtt_client_interfaces__srv__IsConnected_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mqtt_client_interfaces__srv__IsConnected_Event));
  bool success = mqtt_client_interfaces__srv__IsConnected_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mqtt_client_interfaces__srv__IsConnected_Event__destroy(mqtt_client_interfaces__srv__IsConnected_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mqtt_client_interfaces__srv__IsConnected_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mqtt_client_interfaces__srv__IsConnected_Event__Sequence__init(mqtt_client_interfaces__srv__IsConnected_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mqtt_client_interfaces__srv__IsConnected_Event * data = NULL;

  if (size) {
    data = (mqtt_client_interfaces__srv__IsConnected_Event *)allocator.zero_allocate(size, sizeof(mqtt_client_interfaces__srv__IsConnected_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mqtt_client_interfaces__srv__IsConnected_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mqtt_client_interfaces__srv__IsConnected_Event__fini(&data[i - 1]);
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
mqtt_client_interfaces__srv__IsConnected_Event__Sequence__fini(mqtt_client_interfaces__srv__IsConnected_Event__Sequence * array)
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
      mqtt_client_interfaces__srv__IsConnected_Event__fini(&array->data[i]);
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

mqtt_client_interfaces__srv__IsConnected_Event__Sequence *
mqtt_client_interfaces__srv__IsConnected_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mqtt_client_interfaces__srv__IsConnected_Event__Sequence * array = (mqtt_client_interfaces__srv__IsConnected_Event__Sequence *)allocator.allocate(sizeof(mqtt_client_interfaces__srv__IsConnected_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mqtt_client_interfaces__srv__IsConnected_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mqtt_client_interfaces__srv__IsConnected_Event__Sequence__destroy(mqtt_client_interfaces__srv__IsConnected_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mqtt_client_interfaces__srv__IsConnected_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mqtt_client_interfaces__srv__IsConnected_Event__Sequence__are_equal(const mqtt_client_interfaces__srv__IsConnected_Event__Sequence * lhs, const mqtt_client_interfaces__srv__IsConnected_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mqtt_client_interfaces__srv__IsConnected_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mqtt_client_interfaces__srv__IsConnected_Event__Sequence__copy(
  const mqtt_client_interfaces__srv__IsConnected_Event__Sequence * input,
  mqtt_client_interfaces__srv__IsConnected_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mqtt_client_interfaces__srv__IsConnected_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mqtt_client_interfaces__srv__IsConnected_Event * data =
      (mqtt_client_interfaces__srv__IsConnected_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mqtt_client_interfaces__srv__IsConnected_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mqtt_client_interfaces__srv__IsConnected_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mqtt_client_interfaces__srv__IsConnected_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
