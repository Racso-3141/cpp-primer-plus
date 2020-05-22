#include <iostream>
double convert(double);
int main(int argc, char const *argv[]) {
  std::cout << "Please enter a Celsius Value: ";
  double c;
  std::cin >> c;
  std::cout << std::endl << c <<" degrees Celsius is " <<convert(c) <<" degrees Fahrenheit." << '\n';
  return 0;
}
double convert(double c) {
  return 1.8*c + 32.0;
}
