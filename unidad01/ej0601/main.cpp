#include <iostream>
#include <cassert>
using namespace std;

double multiplicar(const double a, const double b) noexcept {
  return a * b;
}

int main() {
  constexpr auto a = 3.;
  constexpr auto b = 4.;
  constexpr auto resultado = a * b;

  assert(resultado == multiplicar(a, b));
  cout << a << " * " << b << " = " << multiplicar(a, b) << endl;

  return 0;
}