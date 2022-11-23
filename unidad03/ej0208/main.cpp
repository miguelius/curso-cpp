#include <iostream>
#include <cassert>
#include "Figuras.hpp"
using std::cout;
using std::endl;

int main(void) {
  auto ci = Circulo(100.0);
  auto cu = Cuadrado(10.0);
  auto ge = Generico(5);

  assert(0 == ci.Lados());
  assert(4 == cu.Lados());
  assert(5 == ge.Lados());

  cout << ci.Area() << endl;
  cout << cu.Area() << endl;
  cout << ge.Area() << endl;

  assert( 31400 == ci.Area());
  assert(   100 == cu.Area());
  assert(     0 == ge.Area());

  cout << ci.Perimetro() << endl;
  cout << cu.Perimetro() << endl;
  cout << ge.Perimetro() << endl;

  assert( 628 == ci.Perimetro());
  assert(  40 == cu.Perimetro());
  assert(   0 == ge.Perimetro());

  ci.Color("Rojo");
  assert( "Rojo" == ci.Color());

  cu.Color("Azul");
  assert( "Azul" == cu.Color());

  ge.Color("Verde");
  assert( "Verde" == ge.Color());

  return 0;
}
