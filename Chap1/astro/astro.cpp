#include <iostream>
using namespace std;
double convert(double);
int main(int argc, char const *argv[]) {
  std::cout << "Enter the number of light years: ";
  double l;
  std::cin >> l;
  std::cout << std::endl << l <<" light years = " <<convert(l) <<" astronomical units." << '\n';
  return 0;
}
double convert(double l) {
  return 63240 * l;
}
