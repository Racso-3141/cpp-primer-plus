//exercise 2 of chapter 3
#include <iostream>
#include <cmath>
int main(int argc, char const *argv[]) {
  const int feet_to_inches = 12;
  const double inches_to_meters = 0.0254;
  const double pounds_to_kilograms = 1/2.2;
  std::cout << "Type your height as feet and inches and your weight in pounds.";
  std::cout << "feet:_\b";
  int feet;
  std::cin >> feet;
  std::cout << "inches:_\b";
  int inches;
  std::cin >> inches;
  std::cout << "pounds:_\b";
  double pounds;
  std::cin >> pounds;
  int height_inches = feet_to_inches * feet + inches;
  double height_meters = inches_to_meters * height_inches;
  double weight_kilograms = pounds_to_kilograms *pounds;
  std::cout << "BMI is " << (weight_kilograms / sqrt(height_meters));
  return 0;
}
