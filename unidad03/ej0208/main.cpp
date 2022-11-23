#include <iostream>
#include <cassert>
#include "Figuras.hpp"
using std::cout;
using std::endl;

int main(void) {
  assert( 0 == Circulo::Instancias());
  auto *ci = new Circulo(100.0);
  assert( 1 == Circulo::Instancias());
  delete ci;
  assert( 0 == Circulo::Instancias());

  assert( 0 == Cuadrado::Instancias());
  auto *cu = new Cuadrado(10.0);
  assert( 1 == Cuadrado::Instancias());
  delete cu;
  assert( 0 == Cuadrado::Instancias());

  assert( 0 == Generico::Instancias());
  auto *ge = new Generico(5);
  assert( 1 == Generico::Instancias());
  delete ge;
  assert( 0 == Generico::Instancias());

  return 0;
}
