#include <iostream>
#include <cassert>
#include "Rectangulo.hpp"
using namespace std;

int main(void) {
  auto r = Rectangulo();
  r.setAltura(3);
  r.setBase(4);
  
  assert(12 == r.Area());

  cout << "Área: " << r.Area() << endl;
  return 0;
}
