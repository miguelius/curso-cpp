#include <iostream>
using namespace std;

int main() {
  constexpr int MULTIPLOS_DE {3};
  constexpr int COTA {50};
  int sum {0};
  int multsDe {0};
  int x {0};
  
  cout << "Ingresar números (se corta cuando la suma llega a << " << COTA << "): " << endl;
  do {
    cout << sum << ") ";
    cin >> x;
    sum += x;
    if ( x != 0 && x % MULTIPLOS_DE == 0 ) {
      ++multsDe;
    }
  } while (sum <= COTA);
  cout << "La suma es " << sum << endl;
  cout << "La cantidad de múltiplos de " << MULTIPLOS_DE << " cargados fueron " << multsDe << endl;
  return 0;
}