#ifndef RECTANGULO_HPP
#define RECTANGULO_HPP

class Rectangulo {
  private:
    int base {0};
    int altura {0};
    static unsigned int n_instancias;
  
  public:
    ~Rectangulo();
    Rectangulo();
    Rectangulo(const int base, const int altura);
    int getBase();
    void setBase(const int base);
    int getAltura();
    void setAltura(const int altura);

    int Area() const;
    void Redimensionar(const int base, const int altura);    

    /*
    * Modifique la clase Rectangulo del ejercicio anterior agregando un método público
    * llamado MayorArea, el cual recibe como argumento una referencia constante a otra
    * instancia (const Fecha &) y devuelve el máximo entre el área de la instancia local
    * y la recibida como argumento
    */
    int MayorArea(const Rectangulo&); 

    static unsigned int Instancias();
};

#endif