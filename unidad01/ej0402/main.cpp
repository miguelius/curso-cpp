#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int prod {1};
  int x {0};
  
  cout << "Ingresar números (0 o negativo para cortar): " << endl;
  do {
    cout << prod << ") ";
    cin >> x;
  } while (x > 0 && (prod*=x));
  cout << "El producto es " << prod << endl;
  return 0;
}