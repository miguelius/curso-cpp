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
    float Area() const;
    float Perimetro() const;

    string Tipo() const;
    int Lados() const;

    // accesors
    string Color() const;
    void Color(const string color);
};

class Generico: public Figura {
  
  public:
    Generico(const int lados);
    float Area() const;
    float Perimetro() const;
    
};

class Cuadrado: public Figura {
  private:
    float _lado;
  
  public:
    Cuadrado(const float lado);
    float Area() const;
    float Perimetro() const;
    
    float Lado() const;
};

class Circulo: public Figura {
  private:
    float _radio;
  
  public:
    Circulo(const float r);
    float Area() const;
    float Perimetro() const;

    float Diametro() const;

    float Radio() const;
    void Radio(const float r);

};

#endif