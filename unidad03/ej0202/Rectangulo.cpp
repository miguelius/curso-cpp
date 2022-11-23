#include <algorithm>
#include "Rectangulo.hpp"
using std::max;

Rectangulo::Rectangulo() {
  this->altura = 1;
  this->base = 1;
}

int Rectangulo::Area() const {
    return this->base*this->altura;
}

int Rectangulo::getBase() {
  return this->base;
}

void Rectangulo::setBase(const int base) {
  this->base = base;
}

int Rectangulo::getAltura() {
  return this->altura;
}

void Rectangulo::setAltura(const int altura) {
  this->altura = altura;
}

void Rectangulo::Redimensionar(const int base, const int altura) {
  this->base = base;
  this->altura = altura;
}

int Rectangulo::MayorArea(const Rectangulo& otro) {
  return max(this->Area(), otro.Area());
}
