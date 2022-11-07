#include <iostream>
#include <cassert>
#include "../comunes/comunes.hpp"
using namespace std;

int main() {
  auto cuantos = pedirDato<int>("Cuántos números vamos a cargar?");
  auto numeros = crearVector<int>(cuantos);
  for (auto i = 0; i < cuantos; ++i) {
    numeros[i] = pedirDato<int>("Ingresa un número: ");
  }

  for (auto i = cuantos; i > 0; ) {
    cout << numeros[--i] << endl;
  }

  delete numeros;
  return 0;
}

