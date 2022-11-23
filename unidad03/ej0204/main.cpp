#include <iostream>
#include <cassert>
#include <cassert>
#include "MiArray.hpp"
using std::cout;
using std::endl;

int main(void) {
  auto p = new MiArray(3);

  p->Valor(1.0,0);
  p->Valor(2.0,1);
  p->Valor(3.0,2);

  for (auto i=0; i<3; ++i) {
    cout << p->Valor(i) << " == " << i + 1 << endl;
  }

  p->Valor(-1.0, 3000); // debería salir a stderr
  assert(-1.0 == p->Valor(3000));
  
  delete p;
  return 0;
}
