#include <iostream>
using namespace std;

int main() {
  constexpr int CUANTOS = 10;
  int sum {0};
  
  int xs[CUANTOS] {0,0,0,0,0,0,0,0,0,0};

  cout << "Ingresar "<< CUANTOS << " números, por favor: " << endl;
  for (int i{0}; i < CUANTOS; ++i) {
    cout << i+1 << "> ";
    cin >> xs[i];
    sum += xs[i];
  }

  cout << "El promedio es " << (double )sum / CUANTOS << endl;

  return 0;
}