// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rom_msgs:msg/Rpm.idl
// generated code does not contain a copyright notice

#ifndef ROM_MSGS__MSG__DETAIL__RPM__BUILDER_HPP_
#define ROM_MSGS__MSG__DETAIL__RPM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rom_msgs/msg/detail/rpm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rom_msgs
{

namespace msg
{

namespace builder
{

class Init_Rpm_right_rpm
{
public:
  explicit Init_Rpm_right_rpm(::rom_msgs::msg::Rpm & msg)
  : msg_(msg)
  {}
  ::rom_msgs::msg::Rpm right_rpm(::rom_msgs::msg::Rpm::_right_rpm_type arg)
  {
    msg_.right_rpm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rom_msgs::msg::Rpm msg_;
};

class Init_Rpm_left_rpm
{
public:
  Init_Rpm_left_rpm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rpm_right_rpm left_rpm(::rom_msgs::msg::Rpm::_left_rpm_type arg)
  {
    msg_.left_rpm = std::move(arg);
    return Init_Rpm_right_rpm(msg_);
  }

private:
  ::rom_msgs::msg::Rpm msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rom_msgs::msg::Rpm>()
{
  return rom_msgs::msg::builder::Init_Rpm_left_rpm();
}

}  // namespace rom_msgs

#endif  // ROM_MSGS__MSG__DETAIL__RPM__BUILDER_HPP_
