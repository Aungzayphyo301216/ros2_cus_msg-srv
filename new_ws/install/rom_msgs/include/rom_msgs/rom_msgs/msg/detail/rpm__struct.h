// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rom_msgs:msg/Rpm.idl
// generated code does not contain a copyright notice

#ifndef ROM_MSGS__MSG__DETAIL__RPM__STRUCT_H_
#define ROM_MSGS__MSG__DETAIL__RPM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Rpm in the package rom_msgs.
typedef struct rom_msgs__msg__Rpm
{
  int16_t left_rpm;
  int16_t right_rpm;
} rom_msgs__msg__Rpm;

// Struct for a sequence of rom_msgs__msg__Rpm.
typedef struct rom_msgs__msg__Rpm__Sequence
{
  rom_msgs__msg__Rpm * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rom_msgs__msg__Rpm__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROM_MSGS__MSG__DETAIL__RPM__STRUCT_H_
