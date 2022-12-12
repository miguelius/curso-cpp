#include <iostream>
#include <cassert>
#include "Menu.hpp"
#include "Coleccionable.hpp"
using std::cout;
using std::cin;
using std::endl;

int main(void) {
  auto resultado {0};
  Menu m {"Colecciones"};
  auto cs = vector<Cancion>();
  cs.push_back(Cancion("Despacito", "Dady Yankee", "Dady Yankee", 1000, "Una bomba!"));
  cs.push_back(Cancion("La mordidita", "Ricky Martin", "Ricky Martin", 10000, "Temazo!"));
  cs.push_back(Cancion("Ya nadie va escuchar tu remera", "Patricio Rey y Los Redonditos de Ricota", "Juan Carlos Solari", 100, "Otra bomba!"));
  auto ls = vector<Libro>();
  ls.push_back(Libro("El viejo y el mar", "Ernest Hemingway", "Una bomba!"));
  auto ps = vector<Pelicula>();
  ps.push_back(Pelicula("Voley", "Piroyansky", 2018, 10, "Una bomba!"));
  ColeccionableABM<Cancion> cancionesABM {cs};
  ColeccionableABM<Libro> librosABM {ls};
  ColeccionableABM<Pelicula> peliculasABM {ps};
  m.registrarOpcion('C', "Canciones", cancionesABM.pantalla());
  m.registrarOpcion('L', "Libros", librosABM.pantalla());
  m.registrarOpcion('P', "Peliculas", peliculasABM.pantalla());
  m.registrarSalida('S', "Salir", new Salir());
  Pantalla *p = &m;
  do {
    p = p->interactuar();
  } while (p->Estado() > 0);
  
  return resultado;
}
