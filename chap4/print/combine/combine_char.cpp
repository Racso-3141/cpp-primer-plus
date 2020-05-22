//Combine first and last name with char method 4.3
#include <iostream>
#include <cstring>
int main(int argc, char const *argv[]) {
  using namespace std;
  int Arsize = 20;

  //Enter your first name
  std::cout << "Enter your first name: ";
  char charr1[Arsize];
  cin.get(charr1, Arsize).get();

  //Enter your last name
  std::cout << "Enter your last name: ";
  char charr2[Arsize];
  cin.get(charr2, Arsize).get();

  //display full name
  strcat(charr1, ", ");
  strcat(charr1, charr2);
  std::cout <<"Here is the information in a single string: "
  << charr1 << '\n';
  return 0;
}
