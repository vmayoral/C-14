#include<iostream>
#include<complex>

// Traditionally, one would define type agonostic
// operations using a template as:
//
// template <typename T>
// T func(T z) {
//     return z * z;
// }

int main() {
  // C++11
  // error with non-int inputs
  // auto func = [](int input) { return input * input; };

  // C++14
  // Store a generalized lambda, that squares a number, in a variable
  auto func = [](auto input) { return input * input; };

  // Usage examples:
  // square of an int
  std::cout << func(10) << std::endl;

  // square of a double
  std::cout << func(2.345) << std::endl;

  // square of a complex number
  std::cout << func(std::complex<double>(3, -2)) << std::endl;

  return 0;
}
