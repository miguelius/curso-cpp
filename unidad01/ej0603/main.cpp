#include <iostream>
#include <cassert>
#include "../../comunes/comunes.hpp"
using std::cin;
using std::cout;
using std::endl;
using std::string;

int pedirOpcion(const string mensaje, const int max = 99) {
  auto x = 0;
  cout << mensaje << "(1 - " << max << ") "<< ": ";
  cin >> x;
  if (0 > x || x > max) {
    return -1;
  }
  return x;
}

void imprimirMenu() {
  cout << "Qué hacemos con los numeritos que cargaste?" << endl;
  cout << "1) +" << endl;
  cout << "2) -" << endl;
  cout << "3) *" << endl;
  cout << "4) /" << endl;
}

int main() {
  double (*operaciones[])(const double, const double) = { sum, sub, mul, div};
  auto x = pedirDato<double>("Ingresar un número");
  auto y = pedirDato<double>("Ingresar otro número");
  imprimirMenu();
  auto opcion = pedirOpcion("Ingrese una opción ", 4);
  if (opcion == -1) {
    cout << "Así no se puede! Ingresaste una opción inválida." << endl;
    return -1;
  }
  cout << "El resultado es " << (operaciones[opcion - 1])(x, y) << endl;
  return 0;
}

