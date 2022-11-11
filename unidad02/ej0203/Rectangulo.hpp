#ifndef RECTANGULO_HPP
#define RECTANGULO_HPP

class Rectangulo {
  private:
    int base {0};
    int altura {0};

  public:
    int getBase();
    void setBase(const int base);
    int getAltura();
    void setAltura(const int altura);

    int Area();
    void Redimensionar(const int base, const int altura);    
};

#endif