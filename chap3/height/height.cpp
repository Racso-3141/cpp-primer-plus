//exercise 1 of chapter 3
#include <iostream>
int main(int argc, char const *argv[]) {
  const int foot = 12;
  std::cout << "\aType your height:__\b\b";
  int height_inches;
  std::cin >> height_inches;
  std::cout << "Your height is " <<(height_inches / foot) <<" feet " <<"and "<<height_inches%foot <<" inches.";
  return 0;
}
