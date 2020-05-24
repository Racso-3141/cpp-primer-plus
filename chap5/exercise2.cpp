//exercise 2
#include <iostream>
#include <array>
int main(int argc, char const *argv[]) {
  using namespace std;
  array<long double, 101> fac;
  fac[0] = fac[1] = 1.0L;
  for (int i = 2; i  < 101; i++) {
    fac[i] = fac[ i - 1] * i;
  }
  for (int j = 0; j < 101; j++) {
    std::cout << "fac[j] is " << fac[j] <<'\n';
  }
  return 0;
}
