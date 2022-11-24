#include <iostream>
#include <algorithm>
#include "Complejo.hpp"
using std::ostream;
using std::max;

Complejo Complejo::i = Complejo(0,1);

float Complejo::Real() const {
  return this->real;
}

float Complejo::Imaginaria() const {
  return this->imaginaria;
}

Complejo::Complejo(): real { 0 }, imaginaria { 0 } {

}

Complejo::Complejo(const float r, const float i): real { r }, imaginaria { i } {

}

Complejo Complejo::sumar(const Complejo y) {
  return Complejo(this->real + y.real, this->imaginaria + y.imaginaria);
}

// (a+bi)*(c+di)
// a*c + a*di + bi*c + bi*di
// a*c + a*di + b*ci - b*d
// a*c - b*d + (a*d + b*c)i
Complejo Complejo::multiplicar(const Complejo y) {
  auto a = this->real * y.real - this->imaginaria * y.imaginaria;
  auto b = this->imaginaria * y.real + this->real * y.imaginaria;

  return Complejo(a, b);
}

Complejo Complejo::operator+ (const Complejo& y) {
  return this->sumar(y);
}

Complejo Complejo::operator- (const Complejo& y) {
  return this->sumar((Complejo )y*-1.0);
}

Complejo Complejo::operator* (const Complejo& y) {
  return this->multiplicar(y);
}

std::ostream& operator<< (std::ostream& out, const Complejo& c) {
  out << c.Real() << " + " << c.Imaginaria() << "i";
  return out;
}

Complejo& Complejo::operator+= (const Complejo& x) {
  *this = this->sumar(x);
  return *this;
} 

Complejo Complejo::operator* (const double& x) {
  return this->multiplicar(Complejo(x,0));
} 

Complejo& Complejo::operator-= (const Complejo& x) {
  *this = this->sumar((Complejo )x*(-1.0));
  return *this;
} 

Complejo& Complejo::operator*= (const Complejo& x) {
  *this = this->multiplicar(x);
  return *this;
}

bool Complejo::operator== (const Complejo& lhs) {
  return this->real == lhs.real
    && this->imaginaria == lhs.imaginaria;
}

bool Complejo::operator!= (const Complejo& lhs) {
  return !(*this == lhs);
}

Complejo& Complejo::operator++ () { 
  this->real++;
  return *this;
}

Complejo Complejo::operator++ (int) { 
  Complejo old = *this;
  operator++();
  return old;
}

Complejo& Complejo::operator-- () { 
  this->real--;
  return *this;
}

Complejo Complejo::operator-- (int) { 
  Complejo old = *this;
  operator--();
  return old;
} 
