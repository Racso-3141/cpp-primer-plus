#include <iostream>
void time(int, int);
int main(int argc, char const *argv[]) {
  std::cout << "Enter the number of hours: ";
  int hours;
  std::cin >> hours;
  std::cout << "Enter the number of minutes: ";
  int minutes;
  std::cin >> minutes;
  time(hours,minutes);
  return 0;
}
void time(int hours, int minutes) {
  std::cout << "Time: " << hours <<":" <<minutes << '\n';
}
