#include <iostream>
#include<cassert>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
  int nro {};
  constexpr int COTA_INFERIOR = -2;
  constexpr int COTA_SUPERIOR = 4;
  
  assert( COTA_INFERIOR <= COTA_SUPERIOR);

  cout << "nro\t= ";
  cin >> nro;

  string esta {};
  
  if (COTA_INFERIOR < nro && nro < COTA_SUPERIOR) {
    esta = "";
  } else {
    esta = " no";
  }

  cout << nro << esta << " está en intervarlo (" << COTA_INFERIOR << ", " << COTA_SUPERIOR << ")" << endl; 
  return 0;
}