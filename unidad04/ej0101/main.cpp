#include <iostream>
#include <cassert>
#include "Complejo.hpp"
using std::cout;
using std::endl;

int main(void) {
  auto r = Complejo();
  auto x = Complejo(1, 0);
  auto y = Complejo(0, 1);
  auto v = x.sumar(y);
  auto w = x.multiplicar(y);
  auto z = x.multiplicar(Complejo(2,1));

  assert(x+y == y+x);
  assert(x*y == y*x);
  assert(x+y != y*x);
  assert(y == Complejo::i);

  auto p = y;
  cout << "y = " << p << endl;
  p *= y;
  cout << "y^2 = " << p << endl;
  p *= y;
  cout << "y^3 = " << p << endl;
  p *= y;
  cout << "y^4 = " << p << endl;
  p *= y;
  cout  << "y^5 = "<< p << endl;
  
  assert(p == y);
  cout << r << endl;
  cout << x << endl;
  cout << y << endl;
  cout << v << endl;
  cout << w << endl;
  cout << z * y << " = " << z.multiplicar(y);
  z*=y;
  cout << " = " << z << endl;
  cout << x + y << " = " << x.sumar(y) << endl;
  cout << x << endl;
  x+=y;
  cout << x << endl;
  cout << x*-1.0 << endl;
  x-=y;
  cout << x << endl;
  cout << Complejo::i << endl;
  cout << ++x << endl;
  cout << x++ << endl;
  cout << x << endl;
  cout << --x << endl;
  cout << x-- << endl;
  cout << x << endl;
  return 0;
}
