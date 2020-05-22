//Combine first and last name with String method 4.4
#include <iostream>
#include <string>
int main(int argc, char const *argv[]) {
  using namespace std;

  //Enter your first name
  std::cout << "Enter your first name: ";
  string first_name;
  getline(cin, first_name);

  //Enter your last name
  std::cout << "Enter your last name: ";
  string last_name;
  getline(cin, last_name);

  //display full name
  std::cout << last_name + ", " + first_name << '\n';
  return 0;
}
