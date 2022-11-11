#include <iostream>
#include <cassert>
using namespace std;

int main() {
  int i = 42;
  int k = i;
  int *p = &i;
  k = 75;
  cout << i << endl;
  //* k = 75; k no es un puntero
  // p = 75;  p es un muntero, no puedo asignarle el valor 75
  *p = 75;
  cout << i << endl;
}

