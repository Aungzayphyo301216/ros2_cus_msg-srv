// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from motor_msg:msg/Rpm.idl
// generated code does not contain a copyright notice
#include "motor_msg/msg/detail/rpm__rosidl_typesupport_fastrtps_cpp.hpp"
#include "motor_msg/msg/detail/rpm__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace motor_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motor_msg
cdr_serialize(
  const motor_msg::msg::Rpm & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: left_rpm
  cdr << ros_message.left_rpm;
  // Member: right_rpm
  cdr << ros_message.right_rpm;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motor_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  motor_msg::msg::Rpm & ros_message)
{
  // Member: left_rpm
  cdr >> ros_message.left_rpm;

  // Member: right_rpm
  cdr >> ros_message.right_rpm;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motor_msg
get_serialized_size(
  const motor_msg::msg::Rpm & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: left_rpm
  {
    size_t item_size = sizeof(ros_message.left_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_rpm
  {
    size_t item_size = sizeof(ros_message.right_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_motor_msg
max_serialized_size_Rpm(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: left_rpm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: right_rpm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Rpm__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const motor_msg::msg::Rpm *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Rpm__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<motor_msg::msg::Rpm *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Rpm__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const motor_msg::msg::Rpm *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Rpm__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Rpm(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Rpm__callbacks = {
  "motor_msg::msg",
  "Rpm",
  _Rpm__cdr_serialize,
  _Rpm__cdr_deserialize,
  _Rpm__get_serialized_size,
  _Rpm__max_serialized_size
};

static rosidl_message_type_support_t _Rpm__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Rpm__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace motor_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_motor_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<motor_msg::msg::Rpm>()
{
  return &motor_msg::msg::typesupport_fastrtps_cpp::_Rpm__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, motor_msg, msg, Rpm)() {
  return &motor_msg::msg::typesupport_fastrtps_cpp::_Rpm__handle;
}

#ifdef __cplusplus
}
#endif
