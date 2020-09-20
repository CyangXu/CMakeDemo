#ifndef EFFECTIVE_MODERN_CPP_DATA_TYPES_H_
#define EFFECTIVE_MODERN_CPP_DATA_TYPES_H_

#include <initializer_list>
#include <string>

namespace effectiveModernCpp {
class Widget {
public:
  Widget() = default;
  ~Widget() = default;
  Widget(int value) : value_(value) {}
  Widget(const std::initializer_list<std::string>& init_list) {}


  int value() const { return value_; }

private:
  int value_;
};

} // namespace effectiveModernCpp

#endif