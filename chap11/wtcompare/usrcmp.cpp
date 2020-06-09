#include <iostream>
#include "cmp.h"

int main(int argc, char const *argv[]) {
  Stonewt ar[6] = {
    451.65, 654.14, 569.98
  };

  //Initialize the remaining 3 elements
  int i = 3;
  std::cout << "Enter value of ar["<< i << "]: ";
  while (i < 6 && std::cin >> ar[i]) {
    std::cin.get();
    i++;
    if (i == 6) {
      break;
    }
    std::cout << "Enter value of ar["<< i << "]: ";
  }

  int count = 0;
  Stonewt greatest = ar[0];
  Stonewt smallest = ar[0];
  for(int j = 1; j < 6; j++) {
    if (ar[j] >= Stonewt(11, 0)) {
      count++;
    }
    if (ar[j] > greatest) {
      greatest = ar[j];
    } else if (ar[j] < smallest) {
      smallest = ar[j];
    }
  }
  std::cout << "greatest: " << greatest << '\n';
  std::cout << "smallest: " << greatest << '\n';
  std::cout << "There are " << count <<" elements greater than 11 stone." << '\n';
  return 0;
}
