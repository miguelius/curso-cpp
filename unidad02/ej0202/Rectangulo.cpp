#include "Rectangulo.hpp"

int Rectangulo::Area() {
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

