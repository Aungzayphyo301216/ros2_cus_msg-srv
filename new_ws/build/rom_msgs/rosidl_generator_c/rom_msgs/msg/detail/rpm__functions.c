// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rom_msgs:msg/Rpm.idl
// generated code does not contain a copyright notice
#include "rom_msgs/msg/detail/rpm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rom_msgs__msg__Rpm__init(rom_msgs__msg__Rpm * msg)
{
  if (!msg) {
    return false;
  }
  // left_rpm
  // right_rpm
  return true;
}

void
rom_msgs__msg__Rpm__fini(rom_msgs__msg__Rpm * msg)
{
  if (!msg) {
    return;
  }
  // left_rpm
  // right_rpm
}

bool
rom_msgs__msg__Rpm__are_equal(const rom_msgs__msg__Rpm * lhs, const rom_msgs__msg__Rpm * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_rpm
  if (lhs->left_rpm != rhs->left_rpm) {
    return false;
  }
  // right_rpm
  if (lhs->right_rpm != rhs->right_rpm) {
    return false;
  }
  return true;
}

bool
rom_msgs__msg__Rpm__copy(
  const rom_msgs__msg__Rpm * input,
  rom_msgs__msg__Rpm * output)
{
  if (!input || !output) {
    return false;
  }
  // left_rpm
  output->left_rpm = input->left_rpm;
  // right_rpm
  output->right_rpm = input->right_rpm;
  return true;
}

rom_msgs__msg__Rpm *
rom_msgs__msg__Rpm__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rom_msgs__msg__Rpm * msg = (rom_msgs__msg__Rpm *)allocator.allocate(sizeof(rom_msgs__msg__Rpm), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rom_msgs__msg__Rpm));
  bool success = rom_msgs__msg__Rpm__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rom_msgs__msg__Rpm__destroy(rom_msgs__msg__Rpm * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rom_msgs__msg__Rpm__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rom_msgs__msg__Rpm__Sequence__init(rom_msgs__msg__Rpm__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rom_msgs__msg__Rpm * data = NULL;

  if (size) {
    data = (rom_msgs__msg__Rpm *)allocator.zero_allocate(size, sizeof(rom_msgs__msg__Rpm), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rom_msgs__msg__Rpm__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rom_msgs__msg__Rpm__fini(&data[i - 1]);
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
rom_msgs__msg__Rpm__Sequence__fini(rom_msgs__msg__Rpm__Sequence * array)
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
      rom_msgs__msg__Rpm__fini(&array->data[i]);
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

rom_msgs__msg__Rpm__Sequence *
rom_msgs__msg__Rpm__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rom_msgs__msg__Rpm__Sequence * array = (rom_msgs__msg__Rpm__Sequence *)allocator.allocate(sizeof(rom_msgs__msg__Rpm__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rom_msgs__msg__Rpm__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rom_msgs__msg__Rpm__Sequence__destroy(rom_msgs__msg__Rpm__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rom_msgs__msg__Rpm__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rom_msgs__msg__Rpm__Sequence__are_equal(const rom_msgs__msg__Rpm__Sequence * lhs, const rom_msgs__msg__Rpm__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rom_msgs__msg__Rpm__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rom_msgs__msg__Rpm__Sequence__copy(
  const rom_msgs__msg__Rpm__Sequence * input,
  rom_msgs__msg__Rpm__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rom_msgs__msg__Rpm);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rom_msgs__msg__Rpm * data =
      (rom_msgs__msg__Rpm *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rom_msgs__msg__Rpm__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rom_msgs__msg__Rpm__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rom_msgs__msg__Rpm__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
