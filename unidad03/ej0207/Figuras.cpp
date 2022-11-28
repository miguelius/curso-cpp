#include <iostream>
#include <algorithm>
#include "Figuras.hpp"
using std::max;
using std::cerr;
using std::endl;

string Figura::Tipo() const {
  return this->_tipo;
}

string Figura::Color() const {
  return this->_color;
}

void Figura::Color(const string color) {
  this->_color = color;
}

int Figura::Lados() const { 
  if ("Generico" != this->Tipo() && "Cuadrado" != this->Tipo() && "Circulo" != this->Tipo()) {
    cerr << "Tipo: " << this->Tipo() << " desconocido. " << endl;
    return -1;
  } 
  return this->_lados;
}

float Generico::Area() const { 
  return 0;
}

float Cuadrado::Area() const {
    auto l = this->Lado();
    return l*l;
}

float Circulo::Area() const { 
    auto r = this->Radio();
    return r * r * 3.14;
}

float Generico::Perimetro() const { 
  return 0;
}

float Cuadrado::Perimetro() const { 
  auto l = this->Lado();
  return 4*l;
}

float Circulo::Perimetro() const { 
    auto d = this->Diametro();
    return d * 3.14;
}

Generico::Generico(const int lados) {
  this->_tipo = "Generico";
  this->_lados = lados;
}

Circulo::Circulo(const float radio) {
  this->_tipo = "Circulo";
  this->_radio = radio;
  this->_lados = 0;
}

float Circulo::Radio() const {
  return this->_radio;
}

float Circulo::Diametro() const {
  return this->_radio * 2;
}

Cuadrado::Cuadrado(const float lado) {
  this->_tipo = "Cuadrado";
  this->_lado = lado;
  this->_lados = 4;
}

float Cuadrado::Lado() const {
  return this->_lado;
}
