#include <iostream>
#include <cassert>
#include "Rectangulo.hpp"
using std::cout;
using std::endl;

int main(void) {
  auto r = Rectangulo();
  r.altura = 3;
  r.base = 4;
  
  assert(12 == r.Area());

  cout << "Área: " << r.Area() << endl;
  return 0;
}
