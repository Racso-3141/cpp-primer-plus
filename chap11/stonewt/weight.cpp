#include <iostream>
#include "stonewt.h"

int main(int argc, char const *argv[]) {
  Stonewt st1; //default constructor
  Stonewt st2(451.4); //one argument constructor
  Stonewt st3(15.2, 31.2); //two argument constructor

  std::cout << "st1: " << st1 << '\n';
  std::cout << "st2: " << st2 << '\n';
  std::cout << "st3: " << st3 << '\n';

  st1.setUnit(Stonewt::INTEGER);
  std::cout << "st1: " << st1 << '\n';

  std::cout << "st2 + st3 = " << st2 + st3 << '\n';
  std::cout << "st1 - st2 = " << st1 - st2 << '\n';
  std::cout << "st2 * st3 = " << st2 * st3 << '\n';

  return 0;
}
