#include <iostream>
#include <cassert>
using namespace std;

int sum(const int vec[], const int n);

void probarla();

int main() {
  probarla();
  return 0;
}

int sum(const int vec[], const int n) {
  auto sum {0};
  for (auto i {0}; i < n ; ++i) {
    sum += vec[i];
  }
  return sum;
}

void probarla() {
  constexpr int vec[] {1,2,3,4,5};
  constexpr int n = 5;
  assert( n*(n+1)/2 == sum(vec, n));
  cout << n*(n+1)/2 << " = " << sum(vec, n) << endl;
}
