#include <iostream>
using namespace std;

int main() {
  constexpr int CUANTOS = 10;
  double xs[CUANTOS] {0.,0.,0.,0.,0.,0.,0.,0.,0.,0.};

  cout << "Ingresar "<< CUANTOS << " números, por favor: " << endl;
  for (auto i{0}; i < CUANTOS; ++i) {
    cout << i+1 << "> ";
    cin >> xs[i];
  }
  for (auto i{0}; i < CUANTOS; i+=2 ) {
    cout << i+1 << "> " << xs[i] << endl;
  }

  return 0;
}