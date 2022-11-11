#include <iostream>
using namespace std;

int main() {
  int a {};
  int b {};
  
  cout << "a\t= ";
  cin >> a;
  cout << "b\t= ";
  cin >> b;

  if (a < b) {
    cout << "a * b\t= " << a * b << endl; 
  } else {
    if (b == 0) {
        cout << "no se dividir por 0" << endl;
        exit(-1);
    }
    cout << "a / b\t= " << a / b << endl; 
  }
  return 0;
}