#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(void) {
  int x {};
  int y {};
  int z {};
  
  cout << "x\t= ";
  cin >> x;
  cout << "y\t= ";
  cin >> y;
  cout << "z\t= ";
  cin >> z;
  cout << "x+y+z\t= " << x+y+z << endl;
  cout << "x*y*z\t= " << x*y*z << endl;
  return 0;
}
