#include <algorithm>
#include "Rectangulo.hpp"
using namespace std;

unsigned int Rectangulo::n_instancias {0};

unsigned int Rectangulo::Instancias() {
  return Rectangulo::n_instancias;
}

Rectangulo::~Rectangulo() {
  n_instancias--;
}

Rectangulo::Rectangulo(): base {1}, altura{1} {
  n_instancias++;
}

Rectangulo::Rectangulo(const int la_base, const int la_altura): base{la_base}, altura {la_altura} {
  n_instancias++;
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
