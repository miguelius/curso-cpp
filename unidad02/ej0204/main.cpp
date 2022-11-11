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
  
  auto q = r; // copio a r
  q.Redimensionar(1,2);
  assert(2 == q.Area());
  cout << "Área redimensionada: " << q.Area() << endl;

  // comparo
  assert(12 == q.MayorArea(r)); // un lado
  assert(12 == r.MayorArea(q)); // el simetrico
  cout << "Area máxima: " << q.MayorArea(r) << endl;

  return 0;
}
