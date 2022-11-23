#include "MiArray.hpp"
#include <iostream>
using std::cerr;
using std::endl;

MiArray::MiArray(size_t el_tamanio) {
    this->tamanio = el_tamanio;
    this->numeros = new float[el_tamanio];
}

MiArray::~MiArray() {
    delete this->numeros;
}

void MiArray::Valor(float val, const unsigned int pos) {
    if (pos >= this->tamanio) {
        cerr << "Error: " << pos << " fuera del rango del array"  << endl;
    }
    this->numeros[pos] = val;
}

float MiArray::Valor(const unsigned int pos) {
    if (pos >= this->tamanio) {
        cerr << "Error: " << pos << " fuera del rango del array" << endl;
        return -1;
    }
    return this->numeros[pos];
}
