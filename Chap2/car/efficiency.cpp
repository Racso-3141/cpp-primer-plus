#include <iostream>
int main(int argc, char const *argv[]) {
  std::cout << "How many miles you have driven: ";
  double miles;
  std::cin >> miles;
  std::cout << "How many gallons of gasoline you have used: ";
  double gallons;
  std::cin >> gallons;
  double efficiency = miles / gallons;
  std::cout << "The efficiency is "<<efficiency<<" miles per gallon\n";
  return 0;
}
