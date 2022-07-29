// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motor_msg:msg/Rpm.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_MSG__MSG__DETAIL__RPM__STRUCT_HPP_
#define MOTOR_MSG__MSG__DETAIL__RPM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__motor_msg__msg__Rpm __attribute__((deprecated))
#else
# define DEPRECATED__motor_msg__msg__Rpm __declspec(deprecated)
#endif

namespace motor_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Rpm_
{
  using Type = Rpm_<ContainerAllocator>;

  explicit Rpm_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_rpm = 0;
      this->right_rpm = 0;
    }
  }

  explicit Rpm_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_rpm = 0;
      this->right_rpm = 0;
    }
  }

  // field types and members
  using _left_rpm_type =
    int16_t;
  _left_rpm_type left_rpm;
  using _right_rpm_type =
    int16_t;
  _right_rpm_type right_rpm;

  // setters for named parameter idiom
  Type & set__left_rpm(
    const int16_t & _arg)
  {
    this->left_rpm = _arg;
    return *this;
  }
  Type & set__right_rpm(
    const int16_t & _arg)
  {
    this->right_rpm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_msg::msg::Rpm_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_msg::msg::Rpm_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_msg::msg::Rpm_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_msg::msg::Rpm_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_msg::msg::Rpm_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_msg::msg::Rpm_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_msg::msg::Rpm_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_msg::msg::Rpm_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_msg::msg::Rpm_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_msg::msg::Rpm_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_msg__msg__Rpm
    std::shared_ptr<motor_msg::msg::Rpm_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_msg__msg__Rpm
    std::shared_ptr<motor_msg::msg::Rpm_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Rpm_ & other) const
  {
    if (this->left_rpm != other.left_rpm) {
      return false;
    }
    if (this->right_rpm != other.right_rpm) {
      return false;
    }
    return true;
  }
  bool operator!=(const Rpm_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Rpm_

// alias to use template instance with default allocator
using Rpm =
  motor_msg::msg::Rpm_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace motor_msg

#endif  // MOTOR_MSG__MSG__DETAIL__RPM__STRUCT_HPP_
