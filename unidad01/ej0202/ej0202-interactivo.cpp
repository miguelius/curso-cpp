#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
  int base {};
  int altura {};
  
  cout << "Base\t\t= ";
  cin >> base;
  cout << "Altura\t\t= ";
  cin >> altura;
  cout << "Base x Altura\t= " << base * altura << endl;
  return 0;
}
