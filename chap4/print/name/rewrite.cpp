//rewrite 4.4
#include <iostream>
#include <string>
int main(int argc, char const *argv[]) {
  using namespace std;

  //Enter your name
  std::cout << "Enter your name:\n";
  string name;
  getline(cin, name);

  //Enter favorite dessert
  std::cout << "Enter your favorite dessert:\n";
  string dessert;
  getline(cin,dessert);

  //display
  std::cout << "I have some delicious " << dessert;
  std::cout << " for you, " << name << ".\n";
  return 0;
}
