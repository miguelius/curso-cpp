#include <iostream>
#include <algorithm>
#include "Figuras.hpp"
using std::max;
using std::cerr;
using std::endl;

Figura::~Figura() {
  if ("Generico" == this->Tipo()) {
    Generico::Soltar();
  } else if ("Cuadrado" == this->Tipo()) {
    Cuadrado::Soltar();
  } else if ("Circulo" == this->Tipo()) {
    Circulo::Soltar();
  } else {
    cerr << "Tipo: " << this->Tipo() << " desconocido. " << endl;
  }
}

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

float Figura::Area() const { 
  if ("Generico" == this->Tipo()) {
    return 0;
  } else if ("Cuadrado" == this->Tipo()) {
    auto l = ((Cuadrado *)this)->Lado();
    return l*l;
  } else if ("Circulo" == this->Tipo()) {
    auto r = ((Circulo *)this)->Radio();
    return r * r * 3.14;
  }
  cerr << "Tipo: " << this->Tipo() << " desconocido. " << endl;
  return -1;
}

float Figura::Perimetro() const { 
  if ("Generico" == this->Tipo()) {
    return 0;
  } if ("Cuadrado" == this->Tipo()) {
    auto l = ((Cuadrado *)this)->Lado();
    return 4*l;
  } if ("Circulo" == this->Tipo()) {
    auto d = ((Circulo *)this)->Diametro();
    return d * 3.14;
  } 
  cerr << "Tipo: " << this->Tipo() << " desconocido. " << endl;
  return -1;
}

Generico::Generico(const int lados) {
  this->_tipo = "Generico";
  this->_lados = lados;
  Generico::n_instancias++;
}

Circulo::Circulo(const float radio) {
  this->_tipo = "Circulo";
  this->_radio = radio;
  this->_lados = 0;
  Circulo::n_instancias++;
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
  Cuadrado::n_instancias++;
}

float Cuadrado::Lado() const {
  return this->_lado;
}

unsigned int Generico::n_instancias {0};
unsigned int Circulo::n_instancias {0};
unsigned int Cuadrado::n_instancias {0};

unsigned int Generico::Instancias() {
  return Generico::n_instancias;
}

unsigned int Circulo::Instancias() {
  return Circulo::n_instancias;
}

unsigned int Cuadrado::Instancias() {
  return Cuadrado::n_instancias;
}

void Generico::Soltar() {
  Generico::n_instancias--;
}

void Circulo::Soltar() {
  Circulo::n_instancias--;
}

void Cuadrado::Soltar() {
  Cuadrado::n_instancias--; 
}