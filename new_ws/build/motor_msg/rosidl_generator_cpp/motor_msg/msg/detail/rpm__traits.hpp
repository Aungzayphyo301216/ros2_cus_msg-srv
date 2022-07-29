// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motor_msg:msg/Rpm.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_MSG__MSG__DETAIL__RPM__TRAITS_HPP_
#define MOTOR_MSG__MSG__DETAIL__RPM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "motor_msg/msg/detail/rpm__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace motor_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const Rpm & msg,
  std::ostream & out)
{
  out << "{";
  // member: left_rpm
  {
    out << "left_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.left_rpm, out);
    out << ", ";
  }

  // member: right_rpm
  {
    out << "right_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.right_rpm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rpm & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: left_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.left_rpm, out);
    out << "\n";
  }

  // member: right_rpm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_rpm: ";
    rosidl_generator_traits::value_to_yaml(msg.right_rpm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rpm & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace motor_msg

namespace rosidl_generator_traits
{

[[deprecated("use motor_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motor_msg::msg::Rpm & msg,
  std::ostream & out, size_t indentation = 0)
{
  motor_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motor_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const motor_msg::msg::Rpm & msg)
{
  return motor_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<motor_msg::msg::Rpm>()
{
  return "motor_msg::msg::Rpm";
}

template<>
inline const char * name<motor_msg::msg::Rpm>()
{
  return "motor_msg/msg/Rpm";
}

template<>
struct has_fixed_size<motor_msg::msg::Rpm>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<motor_msg::msg::Rpm>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<motor_msg::msg::Rpm>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOTOR_MSG__MSG__DETAIL__RPM__TRAITS_HPP_
