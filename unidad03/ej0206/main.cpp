#include <iostream>
#include <cassert>
#include "Rectangulo.hpp"
using std::cout;
using std::endl;

void verifico_si_al_salir_de_funcion_limpia() {
  auto ins = Rectangulo::Instancias();  
  auto r = Rectangulo();
  assert(ins < Rectangulo::Instancias());
}

int main(void) {
  auto r = Rectangulo();
  assert(1 == Rectangulo::Instancias());  
  assert(1 == r.Area());
  cout << "Área: " << r.Area() << endl;
  
  auto q = Rectangulo(1,2);
  assert(2 == Rectangulo::Instancias());  
  assert(2 == q.Area());
  cout << "Área redimensionada: " << q.Area() << endl;

  // comparo
  assert(2 == q.MayorArea(r)); // un lado
  assert(2 == r.MayorArea(q)); // el simetrico
  cout << "Area máxima: " << r.MayorArea(q) << endl;

  auto s = new Rectangulo();
  assert(3 == Rectangulo::Instancias());  
  delete s;
  assert(2 == Rectangulo::Instancias());  
  
  auto ins = Rectangulo::Instancias();  
  verifico_si_al_salir_de_funcion_limpia();
  assert(ins == Rectangulo::Instancias());  
  
  return 0;
}
