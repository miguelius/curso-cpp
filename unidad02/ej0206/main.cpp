#include <iostream>
#include <cassert>
#include "../ej0204/Rectangulo.hpp"
#include "../../comunes/comunes.hpp"
using std::cout;
using std::endl;

int main(void) {
  auto cuantos = pedirDato<int>("Cuántos rectángulos vamos a cargar?");
  auto rectangulos = crearVector<Rectangulo>(cuantos);
  auto indice_maximo {0};

  for (auto i {0}; i < cuantos; ++i) {
    cout << "Rectangulo " << i + 1 << endl;
    auto base = pedirDato<int>("\tBase? ");
    auto altura = pedirDato<int>("\tAltura? ");
    rectangulos[i].Redimensionar(base, altura);
    indice_maximo = rectangulos[i].MayorArea(rectangulos[indice_maximo]) > rectangulos[indice_maximo].Area() ? i : indice_maximo; 
  }

  cout << "El de mayor área fue el número " << indice_maximo + 1 << endl;
  cout << "El área fue de " << rectangulos[indice_maximo].Area() << endl;

  delete rectangulos;

  return 0;
}
