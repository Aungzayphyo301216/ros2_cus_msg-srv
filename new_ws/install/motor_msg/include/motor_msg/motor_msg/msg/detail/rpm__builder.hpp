// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motor_msg:msg/Rpm.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_MSG__MSG__DETAIL__RPM__BUILDER_HPP_
#define MOTOR_MSG__MSG__DETAIL__RPM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motor_msg/msg/detail/rpm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motor_msg
{

namespace msg
{

namespace builder
{

class Init_Rpm_right_rpm
{
public:
  explicit Init_Rpm_right_rpm(::motor_msg::msg::Rpm & msg)
  : msg_(msg)
  {}
  ::motor_msg::msg::Rpm right_rpm(::motor_msg::msg::Rpm::_right_rpm_type arg)
  {
    msg_.right_rpm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_msg::msg::Rpm msg_;
};

class Init_Rpm_left_rpm
{
public:
  Init_Rpm_left_rpm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rpm_right_rpm left_rpm(::motor_msg::msg::Rpm::_left_rpm_type arg)
  {
    msg_.left_rpm = std::move(arg);
    return Init_Rpm_right_rpm(msg_);
  }

private:
  ::motor_msg::msg::Rpm msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_msg::msg::Rpm>()
{
  return motor_msg::msg::builder::Init_Rpm_left_rpm();
}

}  // namespace motor_msg

#endif  // MOTOR_MSG__MSG__DETAIL__RPM__BUILDER_HPP_
