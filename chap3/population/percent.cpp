#include <iostream>
int main(int argc, char const *argv[]) {
  std::cout << "Enter the world's population: ";
  long long world_population;
  std::cin >> world_population;
  std::cout << "Enter the population of the US: ";
  long long US_population;
  std::cin >> US_population;
  double percent = double(US_population) / double(world_population) * 100;
  std::cout << "The population of the US is "<<percent<<"% of the world population\n";
  return 0;
}
