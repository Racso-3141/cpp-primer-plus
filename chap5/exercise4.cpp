//exercise 4 inverstment
#include <iostream>
int main(int argc, char const *argv[]) {
  const int org = 100;
  const double simple = 0.1, compound = 1.05;
  double d_earn = 100, c_earn = 100;
  int years = 0;
  while (c_earn <= d_earn) {
    d_earn += simple * org;
    c_earn *= compound;
    years ++;
  }
  std::cout << "After " << (years) << " year, C's inverstment is over D's inverstment" << '\n';
  std::cout << "C's inverstment is " << c_earn << '\n';
  std::cout << "D's inverstment is " << d_earn << '\n';
  return 0;
}
