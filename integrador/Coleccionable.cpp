#include <iostream>
#include <algorithm>
#include "Coleccionable.hpp"
using std::ostream;
using std::max;

Coleccionable::Coleccionable(string t, string a, string r) {
  this->titulo = t;
  this->autor = a;
  this->resenia = r;
}

Pelicula::Pelicula(string t, string a, int e, int ps, string r): Coleccionable(t,a,r) {
  this->anioEstreno = e;
  this->reseniasPositivas = ps;      
}

Cancion::Cancion(string t, string a, string i, int rs, string r): Coleccionable(t,a,r) {
  this->interprete = i;
  this->reproducciones = rs;      
}
// inline Complejo sumar(const Complejo x, const Complejo y) {
//   return Complejo(x.Real() + y.Real(), x.Imaginaria() + y.Imaginaria());
// }

// // (a+bi)*(c+di)
// // a*c + a*di + bi*c + bi*di
// // a*c + a*di + b*ci - b*d
// // a*c - b*d + (a*d + b*c)i
// inline Complejo multiplicar(const Complejo x, const Complejo y) {
//   auto a = x.Real() * y.Real() - x.Imaginaria() * y.Imaginaria();
//   auto b = x.Imaginaria() * y.Real() + x.Real() * y.Imaginaria();

//   return Complejo(a, b);
// }


// Complejo Complejo::i = Complejo(0,1);

// inline float Complejo::Real() const {
//   return this->real;
// }

// inline float Complejo::Imaginaria() const {
//   return this->imaginaria;
// }

// Complejo::Complejo(): real { 0 }, imaginaria { 0 } {

// }

// Complejo::Complejo(const float r, const float i): real { r }, imaginaria { i } {

// }

// Complejo Complejo::operator+ (const Complejo& y) {
//   return sumar(*this, y);
// }

// Complejo Complejo::operator- (const Complejo& y) {
//   return sumar(*this, ((Complejo )y*-1.0) );
// }

// Complejo Complejo::operator* (const Complejo& y) {
//   return multiplicar(*this,y);
// }

// std::ostream& operator<< (std::ostream& out, const Complejo& c) {
//   auto esconderSigno = false;
//   if (c.Real() != 0.) {
//     out << c.Real();
//   } else {
//     esconderSigno = true;
//   }
//   if (c.Imaginaria() != 0.) {
//     if (c.Imaginaria() < 0) { 
//       out << " - ";
//     } else if (c.Imaginaria() > 0 && !esconderSigno) { 
//       out << " + ";
//     }
//     out << std::abs(c.Imaginaria()) << "i";
//   }
//   return out;
// }


// bool Complejo::operator== (const Complejo& lhs) {
//   return this->real == lhs.real
//     && this->imaginaria == lhs.imaginaria;
// }

// bool Complejo::operator!= (const Complejo& lhs) {
//   return !(*this == lhs);
// }

std::ostream& operator<< (std::ostream& out, const Libro& l) {
  
  return out;
}

std::ostream& operator<< (std::ostream& out, const Pelicula& l) {
  
  return out;
}

std::ostream& operator<< (std::ostream& out, const Cancion& l) {
  
  return out;
}
