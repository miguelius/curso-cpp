#include <iostream>
#include <algorithm>
#include "Complejo.hpp"
using std::ostream;
using std::max;

inline Complejo sumar(const Complejo x, const Complejo y) {
  return Complejo(x.Real() + y.Real(), x.Imaginaria() + y.Imaginaria());
}

// (a+bi)*(c+di)
// a*c + a*di + bi*c + bi*di
// a*c + a*di + b*ci - b*d
// a*c - b*d + (a*d + b*c)i
inline Complejo multiplicar(const Complejo x, const Complejo y) {
  auto a = x.Real() * y.Real() - x.Imaginaria() * y.Imaginaria();
  auto b = x.Imaginaria() * y.Real() + x.Real() * y.Imaginaria();

  return Complejo(a, b);
}


Complejo Complejo::i = Complejo(0,1);

inline float Complejo::Real() const {
  return this->real;
}

inline float Complejo::Imaginaria() const {
  return this->imaginaria;
}

Complejo::Complejo(): real { 0 }, imaginaria { 0 } {

}

Complejo::Complejo(const float r, const float i): real { r }, imaginaria { i } {

}

Complejo Complejo::operator+ (const Complejo& y) {
  return sumar(*this, y);
}

Complejo Complejo::operator- (const Complejo& y) {
  return sumar(*this, ((Complejo )y*-1.0) );
}

Complejo Complejo::operator* (const Complejo& y) {
  return multiplicar(*this,y);
}

std::ostream& operator<< (std::ostream& out, const Complejo& c) {
  auto esconderSigno = false;
  if (c.Real() != 0.) {
    out << c.Real();
  } else {
    esconderSigno = true;
  }
  if (c.Imaginaria() != 0.) {
    if (c.Imaginaria() < 0) { 
      out << " - ";
    } else if (c.Imaginaria() > 0 && !esconderSigno) { 
      out << " + ";
    }
    out << std::abs(c.Imaginaria()) << "i";
  }
  return out;
}

Complejo& Complejo::operator+= (const Complejo& x) {
  *this = sumar(*this, x);
  return *this;
} 

Complejo Complejo::operator* (const double& x) {
  return multiplicar(*this, Complejo(x,0));
} 

Complejo& Complejo::operator-= (const Complejo& x) {
  *this = sumar(*this, (Complejo )x*(-1.0));
  return *this;
} 

Complejo& Complejo::operator*= (const Complejo& x) {
  *this = multiplicar(*this, x);
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

Complejo Complejo::conjugar() {
  return Complejo(this->real, -this->imaginaria);
}
