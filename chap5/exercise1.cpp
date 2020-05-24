//exercise 1 
#include <iostream>
int main(int argc, char const *argv[]) {
  int start, end;
  std::cout << "Enter the start value:　" << '\n';
  std::cin >> start;
  std::cout << "Enter the end value:　" << '\n';
  std::cin >> end;
  int sum = 0;
  for (int i = start; i <= end; i ++) {
    sum += i;
  }
  std::cout << "The sum through " << start << " to " << end <<" is " <<sum << '\n';
  return 0;
}
