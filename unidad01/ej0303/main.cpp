#include <iostream>
#include<cassert>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  int nro {};
  constexpr int DIVISOR = 7;
  
  assert( DIVISOR != 0);

  cout << "nro\t= ";
  cin >> nro;

  string esta {};
  
  if (nro % DIVISOR == 0) {
    esta = "";
  } else {
    esta = " no";
  }

  cout << nro << esta << " es múltiplo de " << DIVISOR << endl; 
  return 0;
}
