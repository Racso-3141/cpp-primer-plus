//exercise 7 car information
#include <iostream>
#include <string>
using namespace std;
struct car {
  string make;
  int year;
};
int main(int argc, char const *argv[]) {
  std::cout << "How many cars do you wish to catalog? ";
  int amount;
  std::cin >> amount;
  cin.get();
  car cars[amount];
  for(int i = 0; i < 2; i++) {
    std::cout << "Car #" << (i+1) <<":" << '\n';
    std::cout << "Please enter the make: ";
    getline(cin, cars[i].make);
    std::cout << "Please enter the year made: ";
    cin >> cars[i].year;
    cin.get();
  }
  std::cout << "Here is the collection:" << '\n';
  std::cout <<cars[0].year<< " " << cars[0].make << '\n';
  std::cout <<cars[1].year<< " " << cars[1].make << '\n';
  return 0;
}
