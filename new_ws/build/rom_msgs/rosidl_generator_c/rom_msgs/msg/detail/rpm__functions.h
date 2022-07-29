// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rom_msgs:msg/Rpm.idl
// generated code does not contain a copyright notice

#ifndef ROM_MSGS__MSG__DETAIL__RPM__FUNCTIONS_H_
#define ROM_MSGS__MSG__DETAIL__RPM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rom_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rom_msgs/msg/detail/rpm__struct.h"

/// Initialize msg/Rpm message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rom_msgs__msg__Rpm
 * )) before or use
 * rom_msgs__msg__Rpm__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rom_msgs
bool
rom_msgs__msg__Rpm__init(rom_msgs__msg__Rpm * msg);

/// Finalize msg/Rpm message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rom_msgs
void
rom_msgs__msg__Rpm__fini(rom_msgs__msg__Rpm * msg);

/// Create msg/Rpm message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rom_msgs__msg__Rpm__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rom_msgs
rom_msgs__msg__Rpm *
rom_msgs__msg__Rpm__create();

/// Destroy msg/Rpm message.
/**
 * It calls
 * rom_msgs__msg__Rpm__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rom_msgs
void
rom_msgs__msg__Rpm__destroy(rom_msgs__msg__Rpm * msg);

/// Check for msg/Rpm message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rom_msgs
bool
rom_msgs__msg__Rpm__are_equal(const rom_msgs__msg__Rpm * lhs, const rom_msgs__msg__Rpm * rhs);

/// Copy a msg/Rpm message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rom_msgs
bool
rom_msgs__msg__Rpm__copy(
  const rom_msgs__msg__Rpm * input,
  rom_msgs__msg__Rpm * output);

/// Initialize array of msg/Rpm messages.
/**
 * It allocates the memory for the number of elements and calls
 * rom_msgs__msg__Rpm__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rom_msgs
bool
rom_msgs__msg__Rpm__Sequence__init(rom_msgs__msg__Rpm__Sequence * array, size_t size);

/// Finalize array of msg/Rpm messages.
/**
 * It calls
 * rom_msgs__msg__Rpm__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rom_msgs
void
rom_msgs__msg__Rpm__Sequence__fini(rom_msgs__msg__Rpm__Sequence * array);

/// Create array of msg/Rpm messages.
/**
 * It allocates the memory for the array and calls
 * rom_msgs__msg__Rpm__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rom_msgs
rom_msgs__msg__Rpm__Sequence *
rom_msgs__msg__Rpm__Sequence__create(size_t size);

/// Destroy array of msg/Rpm messages.
/**
 * It calls
 * rom_msgs__msg__Rpm__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rom_msgs
void
rom_msgs__msg__Rpm__Sequence__destroy(rom_msgs__msg__Rpm__Sequence * array);

/// Check for msg/Rpm message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rom_msgs
bool
rom_msgs__msg__Rpm__Sequence__are_equal(const rom_msgs__msg__Rpm__Sequence * lhs, const rom_msgs__msg__Rpm__Sequence * rhs);

/// Copy an array of msg/Rpm messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rom_msgs
bool
rom_msgs__msg__Rpm__Sequence__copy(
  const rom_msgs__msg__Rpm__Sequence * input,
  rom_msgs__msg__Rpm__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROM_MSGS__MSG__DETAIL__RPM__FUNCTIONS_H_