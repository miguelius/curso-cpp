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
    ~Generico();
    Generico(const int lados);
    float Area() const;
    float Perimetro() const;

    static unsigned int Instancias();
};

class Cuadrado: public Figura {
  private:
    float _lado;
    static unsigned int n_instancias;
  
  public:
    ~Cuadrado();
    Cuadrado(const float lado);
    float Area() const;
    float Perimetro() const;
    
    float Lado() const;
    static unsigned int Instancias();
};

class Circulo: public Figura {
  private:
    float _radio;
    static unsigned int n_instancias;
  
  public:
    ~Circulo();
    Circulo(const float r);
    float Area() const;
    float Perimetro() const;
    float Diametro() const;

    float Radio() const;
    void Radio(const float r);

    static unsigned int Instancias();
};

#endif