#ifndef EFFECTIVE_MODERN_CPP_MOVING_TO_MODERN_CPP_H_
#define EFFECTIVE_MODERN_CPP_MOVING_TO_MODERN_CPP_H_

#include <iostream>

#include "data_types.h"

namespace effectiveModernCpp {

// Case 1: Braced initialization prohibits implicit narrowing conversions among
// the built-in types.
void init() {
  double x, y, z;
  x = y = z = 0.f;

  // The compiler will complain if `sum` is int instead of double.
  double sum{x + y + z};

  std::cout << "value: " << sum << "\n";
}

// Case 2: vexing parse
void vexing() {
  Widget w1(10);

  // Widget w2();
  // Most vexing parse. A function named w2 is declared.

  // Call Widget ctor without any arg. Note that empty braces mean no arguments, not an empty
  // initializer list.
  Widget w2{};

  // The way to call the function which accepts a std::initializer_list as a parameter.
  Widget w3({});
  Widget w4{{}};
}

} // namespace effectiveModernCpp

#endif