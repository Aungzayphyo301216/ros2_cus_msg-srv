// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motor_msg:msg/Rpm.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_MSG__MSG__DETAIL__RPM__STRUCT_H_
#define MOTOR_MSG__MSG__DETAIL__RPM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Rpm in the package motor_msg.
typedef struct motor_msg__msg__Rpm
{
  int16_t left_rpm;
  int16_t right_rpm;
} motor_msg__msg__Rpm;

// Struct for a sequence of motor_msg__msg__Rpm.
typedef struct motor_msg__msg__Rpm__Sequence
{
  motor_msg__msg__Rpm * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_msg__msg__Rpm__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_MSG__MSG__DETAIL__RPM__STRUCT_H_
