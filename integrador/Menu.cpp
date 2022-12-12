#include <algorithm>
#include <cctype>
#include <string>
#include "Menu.hpp"
#include "Coleccionable.hpp"
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::transform;

void Pantalla::Anterior(Pantalla *p) {
    this->anterior = p;
}

void Pantalla::Salida(Opcion *o) {
    this->salida = o;
}

void Menu::registrarSalida(char atajo, string label, Pantalla *p) {
    p->Anterior(this);
    this->salida = new Opcion(atajo, label, p); 
}

void Menu::registrarOpcion(char atajo, string titulo, Pantalla *p) {
    p->Salida(new Opcion('V', "Volver", this));
    this->opciones.push_back( Opcion(atajo, titulo, p) );
}

std::ostream& operator<< (std::ostream& out, const Opcion& o) {
  out << o.atajo << ") ";
  out << o.titulo;
  return out;
}

void Menu::imprimirOpciones() {
    for (Opcion o: opciones) {
        cout << o << endl;
    }
}

Pantalla *Menu::hazTuGracia() {
    char selecciono;
    cout << this->cabecera << endl << endl;
    cout << "Opciones:" << endl;
    this->imprimirOpciones();
    cout << "---------------" << endl;
    cout << *salida << endl;

    cin >> selecciono;

    selecciono = std::tolower(selecciono);
    for (Opcion o : opciones) {
        if (selecciono == std::tolower(o.atajo)) {
            return o.pantalla;
        }
    }
    if (selecciono == std::tolower(salida->atajo)) {
        return salida->pantalla;
    }
    return this;
}

Pantalla *Salir::hazTuGracia() {
    char entrada;
    cout << "¿Estas seguro que queres salir? (S o N)" << endl;
    cin  >> entrada;

    if (std::tolower(entrada) == 's') {
        this->estado = 0;     
        return this;
    }
    return this->anterior;
}

template<typename C>
class ListarPantalla: public Menu {
    private:
      ColeccionableABM<C> *colec = nullptr;
    protected:
      Pantalla *hazTuGracia() override;
    public:
      ListarPantalla(string c, ColeccionableABM<C> * _colec): Menu(c) { this->colec = _colec; }

};

template<typename C>
Pantalla *ListarPantalla<C>::hazTuGracia() {
    cout << "Elementos" << endl;
    cout << "---------------" << endl;
    colec->imprimirListado();
    cout << "---------------" << endl;
    return Menu::hazTuGracia();
}

void llenarMenu(Menu *m) {
    m->registrarOpcion('A', "Agregar", m);
    m->registrarOpcion('M', "Modificar", m);
    m->registrarOpcion('B', "Borrar", m);
}

template<>
Pantalla* ColeccionableABM<Pelicula>::pantalla() {
    Menu *m = new ListarPantalla<Pelicula>("Peliculas", this);
    llenarMenu(m);
    m->registrarOpcion('F', "Filtrar por año de estreno.", m);
    return m;
}

template<>
Pantalla* ColeccionableABM<Cancion>::pantalla() {
    Menu *m = new ListarPantalla<Cancion>("Canciones", this);
    llenarMenu(m);
    m->registrarOpcion('F', "Filtrar con cierta cantidad minima de reproducciones.", m);
    return m;
}

template<>
Pantalla* ColeccionableABM<Libro>::pantalla() {
    Menu *m = new ListarPantalla<Libro>("Libros", this);
    llenarMenu(m);
    return m;
}