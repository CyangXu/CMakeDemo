#ifndef EFFECTIVE_MODERN_CPP_DEDUCING_TYPES_H_
#define EFFECTIVE_MODERN_CPP_DEDUCING_TYPES_H_

#include <cstddef>
#include <iostream>
#include <vector>

namespace effectiveModernCpp {

class Container {
public:
  Container(int idx) : idx_(idx) {}
  const int &idx() const { return idx_; }

private:
  int idx_;
};

extern const std::vector<Container> container_vec;

// Case 1: C++14 style - deduce the function return type of a template function.
template <typename Container> decltype(auto) GetIndex(Container &&c) {
  return std::forward<Container>(c).idx();
}

// Case 2: The type deduced for T is the actual type of the array.
template <typename T, std::size_t N>
constexpr std::size_t arraySize(T (&)[N]) noexcept {
  return N;
}

// Case 3: Demonstrate decltype,
// Return type should be int.
decltype(auto) f1() {
  int x = 0;
  return x;
}

// Return type should be int&.
decltype(auto) f2() {
  int x = 0;
  return (x);
}

// Case 4: auto type of boolean. Note that `p`'s type is Bit_reference.
void AboutBoolean() {
  std::vector<bool> v = {true, true, false};
  auto p = v[0];
  std::cout << "p: " << p;

  auto q = static_cast<bool>(v[0]);
  std::cout << "q: " << q;
}

} // namespace effectiveModernCpp

#endif