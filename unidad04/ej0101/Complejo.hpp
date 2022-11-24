#ifndef RECTANGULO_HPP
#define RECTANGULO_HPP

class Complejo {
  private:
    float real {0};
    float imaginaria {0};

  public:
    static Complejo i;
    float Real() const;
    float Imaginaria() const;

    Complejo();
    Complejo(const float r, const float i);

    Complejo sumar(const Complejo y);
    Complejo multiplicar(const Complejo y);

    Complejo operator+ (const Complejo& x); 
    Complejo operator- (const Complejo& x); 
    Complejo operator* (const Complejo& x); 
    Complejo operator* (const double& x); 
    Complejo& operator+= (const Complejo& x); 
    Complejo& operator-= (const Complejo& x); 
    Complejo& operator*= (const Complejo& x); 
    bool operator== (const Complejo& lhs);
    bool operator!= (const Complejo& lhs);
    Complejo& operator++ (); 
    Complejo operator++ (int); 
    Complejo& operator-- (); 
    Complejo operator-- (int); 

};

std::ostream& operator<< (std::ostream& out, const Complejo& c);

#endif