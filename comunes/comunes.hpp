#ifndef COMUNES_HPP
#define COMUNES_HPP
#include <iostream>
using namespace std;

template <typename T>
T pedirDato(const string mensaje) {
  T x;
  cout << mensaje << ": ";
  cin >> x;
  return x;
}

template <typename T>
T* crearVector(const int cuantos) {
  T* vector {new T[cuantos] {}};
  return vector;
}

template <typename T, typename U>
auto sum(const T x, const U y) noexcept { return x + y; }

template <typename T, typename U>
auto sub(const T x, const U y) noexcept { return x - y; }

template <typename T, typename U>
auto mul(const T x, const U y) noexcept { return x * y; }

template <typename T, typename U>
auto div(const T x, const U y) { return x / y; }

#endif