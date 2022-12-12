#ifndef MENU_HPP
#define MENU_HPP
#include <vector>
#include <string>
#include <iostream>
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::vector;
using std::string;

class Pantalla;

class Opcion {
  public:
    string titulo;
    char atajo;
    Pantalla *pantalla;
    Opcion(char a, string t, Pantalla *p) {atajo = a; titulo = t; pantalla = p;};
};

class Pantalla {
    protected:
      Opcion *salida = nullptr;
      Pantalla *anterior = nullptr;
      int estado = 1;
      virtual Pantalla *hazTuGracia() = 0; //{ return *this; };
    public:
      void Anterior(Pantalla *anterior);
      void Salida(Opcion *salida);
      int Estado() { return this->estado; }
      virtual Pantalla *interactuar() {
        return hazTuGracia();
      }
};

class Salir: public Pantalla {
      Pantalla *hazTuGracia() override;
};

class Menu: public Pantalla {
    private:
      string cabecera = "Opciones";
      vector<Opcion> opciones;
    protected:
      Pantalla *hazTuGracia() override;
    public:
      Menu(string c) { this->cabecera = c; };
      void registrarOpcion(char atajo, string label, Pantalla *p);
      void registrarSalida(char atajo, string label, Pantalla *p);
      void imprimirOpciones();
};

template <typename C>
class ColeccionableABM {
    private:
      vector<C> elementos;
      int paginaActual = 0;
    public:
      ColeccionableABM(vector<C> es) { this->elementos = es; }
      Pantalla *pantalla();
      void imprimirListado() {
          if (elementos.size() > 0) {
            elementos[0].Cabeceras(cout);
            for (C c: elementos) {
              c.ComoFila(cout);
            }
          } else {
            cout << "Coleccion vacia" << endl;
          }
      }
      void imprimirElemento(C elemento) {

      }
      void nuevoElemento() {

      }
      void borrarElemento(C elemento) {

      }
      void modificarElemento(C elemento) {

      }
};

#endif