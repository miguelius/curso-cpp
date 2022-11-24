#include <iostream>
#include <cassert>
#include "Complejo.hpp"
using std::cout;
using std::endl;

int main(void) {
  auto r = Complejo();
  auto x = Complejo(1, 0);
  auto y = Complejo(0, 1);
  auto v = x + y;
  auto w = x * y;
  auto z = x * Complejo(2,1);

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
  cout << z * y << " = " << Complejo(-1,2);
  assert(z*y == Complejo(-1,2) );
  z *= y;
  cout << " = " << z << endl;
  assert(z == Complejo(-1,2) );
  cout << x + y << " = " << Complejo(1,1) << endl;
  assert( x + y == Complejo(1,1) );
  cout << x << endl;
  x+=y;
  cout << x << endl;
  cout << x*-1.0 << endl;
  x-=y;
  cout << x << endl;
  cout << Complejo::i << endl;
  auto q = x;
  cout << ++q << " = " << x * 2 <<  endl;
  assert(q == x*2 );
  cout << q++ << " = " << x * 2 << endl;
  assert(q == x*3 );
  cout << q << " = " << x * 3 << endl;
  cout << --q << " = " << x * 2 << endl;
  assert(q == x*2 );
  cout << q-- << " = " << x * 2 << endl;
  assert(q == x );
  cout << q   << " = " << x << endl;
  cout << (x+y).conjugar() << " = " << x - y << endl;
  assert( (x+y).conjugar() == Complejo(1,-1) );
  assert( (x+y).conjugar() == x-y );
  return 0;
}
