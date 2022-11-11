#include <iostream>
using namespace std;

int main() {
  auto prod {1};
  auto i {0};
  int xs[4096] {};
  
  cout << "Ingresar números (0 o negativo para cortar): " << endl;
  do {
    cout << prod << ") ";
    cin >> xs[i];
  } while (xs[i] > 0 && (prod*=xs[i++]));
  cout << "El producto es " << prod << endl;
  return 0;
}