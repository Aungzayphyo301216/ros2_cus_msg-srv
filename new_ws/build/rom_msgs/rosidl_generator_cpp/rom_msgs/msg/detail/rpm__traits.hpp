// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rom_msgs:msg/Rpm.idl
// generated code does not contain a copyright notice

#ifndef ROM_MSGS__MSG__DETAIL__RPM__TRAITS_HPP_
#define ROM_MSGS__MSG__DETAIL__RPM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rom_msgs/msg/detail/rpm__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rom_msgs
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

}  // namespace rom_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rom_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rom_msgs::msg::Rpm & msg,
  std::ostream & out, size_t indentation = 0)
{
  rom_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rom_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rom_msgs::msg::Rpm & msg)
{
  return rom_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rom_msgs::msg::Rpm>()
{
  return "rom_msgs::msg::Rpm";
}

template<>
inline const char * name<rom_msgs::msg::Rpm>()
{
  return "rom_msgs/msg/Rpm";
}

template<>
struct has_fixed_size<rom_msgs::msg::Rpm>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rom_msgs::msg::Rpm>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rom_msgs::msg::Rpm>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROM_MSGS__MSG__DETAIL__RPM__TRAITS_HPP_
