#ifndef COLECCIONABLE_HPP
#define COLECCIONABLE_HPP
#include <iostream> // std::setw.
#include <iomanip> // std::setw.
using std::string;
using std::setw;
using std::endl;

class Coleccionable {
  private:
    string titulo;
    string autor;
    string resenia;
  protected:

  public:
    Coleccionable(string, string, string);
    string Titulo() const { return titulo; }
    string Autor() const { return autor; }
    string Resenia() const { return resenia; }

    virtual void Cabeceras(std::ostream& out) const {
      out << std::setiosflags(std::ios::left);
      out << setw(30) << "Titulo" << " | " << "Autor" << endl;
    };
    virtual void ComoFila(std::ostream& out) const {
      out << std::setiosflags(std::ios::left);
      out << setw(30) << this->titulo << " | " << this->autor << endl;
    };

};

class Libro: public Coleccionable {
  public:
    Libro(string t, string a, string r): Coleccionable(t,a,r) {};
    void Cabeceras(std::ostream& out) const override {
      Coleccionable::Cabeceras(out);
    }
    void ComoFila(std::ostream& out) const override{
      Coleccionable::ComoFila(out);
    }
};

class Pelicula: public  Coleccionable {
  private:
    int anioEstreno = 1900;
    int reseniasPositivas = 100;
  public:
    Pelicula(string t, string a, int e, int ps, string r);
    void Cabeceras(std::ostream& out) const override {
      out << std::setiosflags(std::ios::left);
      out << setw(25) << "Titulo" << " | " << "Autor" << endl;
      out << setw(10) << "Año Est" << " | " << "Reseñas+" << endl;
    }
    void ComoFila(std::ostream& out) const override {
      out << std::setiosflags(std::ios::left);
      out << setw(25) << this->Titulo() << " | " << this->Autor();
      out << std::setiosflags(std::ios::right);
      out << setw(10) << this->anioEstreno;
      out << " | "; 
      out << this->reseniasPositivas << endl;
    }
};

class Cancion: public Coleccionable {
  private:
    string interprete;
    int reproducciones;
  public:
    Cancion(string t, string a, string i, int rs, string r);
    void Cabeceras(std::ostream& out) const override {
      out << std::setiosflags(std::ios::left);
      out << setw(20) << "Titulo" << " | " << "Autor" << " | ";
      out << "Interprete" << " | "; 
      out << "Reseñas+" << endl;
    }
    void ComoFila(std::ostream& out) const override {
      out << std::setiosflags(std::ios::left);
      out << setw(20) << this->Titulo() << " | " << this->Autor();
      out << setw(20) << " | " << this->interprete;
      out << " | "; 
      out << std::setiosflags(std::ios::right);
      out << setw(20); 
      out << this->reproducciones << endl;
    }
};

std::ostream& operator<< (std::ostream& out, const Coleccionable& c);

#endif