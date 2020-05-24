//exercise 3 enrty sum
#include <iostream>
int main(int argc, char const *argv[]) {
  std::cout << "Type in a number: ";
  int n;
  std::cin >> n;
  int sum = 0;
  while (n != 0) {
    sum += n;
    std::cout << "The current sum is " << sum << '\n';
    std::cin >> n;
  }
  return 0;
}
