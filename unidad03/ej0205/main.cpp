#include <iostream>
#include <cassert>
#include "Rectangulo.hpp"
using namespace std;

int main(void) {
  auto r = Rectangulo();
  assert(1 == Rectangulo::n_instancias);  
  assert(1 == r.Area());
  cout << "Área: " << r.Area() << endl;
  
  auto q = Rectangulo(1,2);
  assert(2 == Rectangulo::n_instancias);  
  assert(2 == q.Area());
  cout << "Área redimensionada: " << q.Area() << endl;

  // comparo
  assert(2 == q.MayorArea(r)); // un lado
  assert(2 == r.MayorArea(q)); // el simetrico
  cout << "Area máxima: " << r.MayorArea(q) << endl;

  auto s = new Rectangulo();
  assert(3 == Rectangulo::n_instancias);  
  delete s;
  assert(2 == Rectangulo::n_instancias);  
  
  return 0;
}
