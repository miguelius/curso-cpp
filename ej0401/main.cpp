#include <iostream>
using namespace std;

int main() {
  constexpr int CUANTOS = 10;
  int sum {0};
  
  cout << "Ingresar "<< CUANTOS << " números, por favor: " << endl;
  for (int i{0}; i < CUANTOS; ++i) {
    int x {};
    cout << i+1 << "> ";
    cin >> x;
    sum += x;
  }

  cout << "El promedio es " << (double )sum / CUANTOS << endl;

  return 0;
}