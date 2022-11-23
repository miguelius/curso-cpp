#ifndef FIGURAS_HPP
#define FIGURAS_HPP
#include <string>
using std::string;

class Figura {
  protected:
    string _tipo;
    string _color;
    int _lados;

  public:
    ~Figura();
    float Area() const;
    float Perimetro() const;

    string Tipo() const;
    int Lados() const;

    // accesors
    string Color() const;
    void Color(const string color);
};

class Generico: public Figura {
  private:
    static unsigned int n_instancias;

  public:
    Generico(const int lados);
    static unsigned int Instancias();
    static void Soltar();    
};

class Cuadrado: public Figura {
  private:
    float _lado;
    static unsigned int n_instancias;
  
  public:
    Cuadrado(const float lado);
    
    float Lado() const;
    static unsigned int Instancias();
    static void Soltar();
};

class Circulo: public Figura {
  private:
    float _radio;
    static unsigned int n_instancias;
  
  public:
    Circulo(const float r);
    float Diametro() const;

    float Radio() const;
    void Radio(const float r);

    static unsigned int Instancias();
    static void Soltar();
};

#endif