#include <iostream>
using namespace std;

int main() {
  auto i {0};
  int xs[4096] {};
  
  cout << "Ingresar números (0): " << endl;
  int aux;
  do {
    cout << i+1 << ") ";
    cin >> aux;
  } while (aux != 0 && (xs[i++] = aux));

  while ( i-- > 0 ) {
    cout << i+1 << ") " << xs[i] << endl;
  }

  return 0;
}