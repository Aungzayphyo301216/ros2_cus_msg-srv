// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from motor_msg:srv/AddTwoInt.idl
// generated code does not contain a copyright notice
#include "motor_msg/srv/detail/add_two_int__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
motor_msg__srv__AddTwoInt_Request__init(motor_msg__srv__AddTwoInt_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
motor_msg__srv__AddTwoInt_Request__fini(motor_msg__srv__AddTwoInt_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

bool
motor_msg__srv__AddTwoInt_Request__are_equal(const motor_msg__srv__AddTwoInt_Request * lhs, const motor_msg__srv__AddTwoInt_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  return true;
}

bool
motor_msg__srv__AddTwoInt_Request__copy(
  const motor_msg__srv__AddTwoInt_Request * input,
  motor_msg__srv__AddTwoInt_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  return true;
}

motor_msg__srv__AddTwoInt_Request *
motor_msg__srv__AddTwoInt_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_msg__srv__AddTwoInt_Request * msg = (motor_msg__srv__AddTwoInt_Request *)allocator.allocate(sizeof(motor_msg__srv__AddTwoInt_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motor_msg__srv__AddTwoInt_Request));
  bool success = motor_msg__srv__AddTwoInt_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motor_msg__srv__AddTwoInt_Request__destroy(motor_msg__srv__AddTwoInt_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motor_msg__srv__AddTwoInt_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motor_msg__srv__AddTwoInt_Request__Sequence__init(motor_msg__srv__AddTwoInt_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_msg__srv__AddTwoInt_Request * data = NULL;

  if (size) {
    data = (motor_msg__srv__AddTwoInt_Request *)allocator.zero_allocate(size, sizeof(motor_msg__srv__AddTwoInt_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motor_msg__srv__AddTwoInt_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motor_msg__srv__AddTwoInt_Request__fini(&data[i - 1]);
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
motor_msg__srv__AddTwoInt_Request__Sequence__fini(motor_msg__srv__AddTwoInt_Request__Sequence * array)
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
      motor_msg__srv__AddTwoInt_Request__fini(&array->data[i]);
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

motor_msg__srv__AddTwoInt_Request__Sequence *
motor_msg__srv__AddTwoInt_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_msg__srv__AddTwoInt_Request__Sequence * array = (motor_msg__srv__AddTwoInt_Request__Sequence *)allocator.allocate(sizeof(motor_msg__srv__AddTwoInt_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motor_msg__srv__AddTwoInt_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motor_msg__srv__AddTwoInt_Request__Sequence__destroy(motor_msg__srv__AddTwoInt_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motor_msg__srv__AddTwoInt_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motor_msg__srv__AddTwoInt_Request__Sequence__are_equal(const motor_msg__srv__AddTwoInt_Request__Sequence * lhs, const motor_msg__srv__AddTwoInt_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motor_msg__srv__AddTwoInt_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motor_msg__srv__AddTwoInt_Request__Sequence__copy(
  const motor_msg__srv__AddTwoInt_Request__Sequence * input,
  motor_msg__srv__AddTwoInt_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motor_msg__srv__AddTwoInt_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motor_msg__srv__AddTwoInt_Request * data =
      (motor_msg__srv__AddTwoInt_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motor_msg__srv__AddTwoInt_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motor_msg__srv__AddTwoInt_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motor_msg__srv__AddTwoInt_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
motor_msg__srv__AddTwoInt_Response__init(motor_msg__srv__AddTwoInt_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sum
  return true;
}

void
motor_msg__srv__AddTwoInt_Response__fini(motor_msg__srv__AddTwoInt_Response * msg)
{
  if (!msg) {
    return;
  }
  // sum
}

bool
motor_msg__srv__AddTwoInt_Response__are_equal(const motor_msg__srv__AddTwoInt_Response * lhs, const motor_msg__srv__AddTwoInt_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sum
  if (lhs->sum != rhs->sum) {
    return false;
  }
  return true;
}

bool
motor_msg__srv__AddTwoInt_Response__copy(
  const motor_msg__srv__AddTwoInt_Response * input,
  motor_msg__srv__AddTwoInt_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sum
  output->sum = input->sum;
  return true;
}

motor_msg__srv__AddTwoInt_Response *
motor_msg__srv__AddTwoInt_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_msg__srv__AddTwoInt_Response * msg = (motor_msg__srv__AddTwoInt_Response *)allocator.allocate(sizeof(motor_msg__srv__AddTwoInt_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motor_msg__srv__AddTwoInt_Response));
  bool success = motor_msg__srv__AddTwoInt_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motor_msg__srv__AddTwoInt_Response__destroy(motor_msg__srv__AddTwoInt_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motor_msg__srv__AddTwoInt_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motor_msg__srv__AddTwoInt_Response__Sequence__init(motor_msg__srv__AddTwoInt_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_msg__srv__AddTwoInt_Response * data = NULL;

  if (size) {
    data = (motor_msg__srv__AddTwoInt_Response *)allocator.zero_allocate(size, sizeof(motor_msg__srv__AddTwoInt_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motor_msg__srv__AddTwoInt_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motor_msg__srv__AddTwoInt_Response__fini(&data[i - 1]);
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
motor_msg__srv__AddTwoInt_Response__Sequence__fini(motor_msg__srv__AddTwoInt_Response__Sequence * array)
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
      motor_msg__srv__AddTwoInt_Response__fini(&array->data[i]);
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

motor_msg__srv__AddTwoInt_Response__Sequence *
motor_msg__srv__AddTwoInt_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_msg__srv__AddTwoInt_Response__Sequence * array = (motor_msg__srv__AddTwoInt_Response__Sequence *)allocator.allocate(sizeof(motor_msg__srv__AddTwoInt_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motor_msg__srv__AddTwoInt_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motor_msg__srv__AddTwoInt_Response__Sequence__destroy(motor_msg__srv__AddTwoInt_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motor_msg__srv__AddTwoInt_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motor_msg__srv__AddTwoInt_Response__Sequence__are_equal(const motor_msg__srv__AddTwoInt_Response__Sequence * lhs, const motor_msg__srv__AddTwoInt_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motor_msg__srv__AddTwoInt_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motor_msg__srv__AddTwoInt_Response__Sequence__copy(
  const motor_msg__srv__AddTwoInt_Response__Sequence * input,
  motor_msg__srv__AddTwoInt_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motor_msg__srv__AddTwoInt_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motor_msg__srv__AddTwoInt_Response * data =
      (motor_msg__srv__AddTwoInt_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motor_msg__srv__AddTwoInt_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motor_msg__srv__AddTwoInt_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motor_msg__srv__AddTwoInt_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
