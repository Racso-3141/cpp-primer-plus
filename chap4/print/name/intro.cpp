#include <iostream>
int main(int argc, char const *argv[]) {
  using namespace std;
  const int Arsize = 20;

  //enter your first name
  cout << "What is your first name? ";
  char first_name[Arsize];
  cin.getline(first_name, Arsize);

  //enter your last name
  std::cout << "What is your last name? ";
  char last_name[Arsize];
  cin.getline(last_name, Arsize);

  //enter your letter grade
  std::cout << "What letter grade do you deserve? ";
  char letter_grade;
  std::cin >> letter_grade;

  //enter your age
  std::cout << "What is your age? ";
  int age;
  std::cin >> age;

  //display your name
  std::cout << "Name: " << last_name << ", "
  << first_name<< '\n';

  //display your grade
  std::cout << "Grade: " << char(letter_grade + 1) << '\n';

  //display your age
  std::cout << "Age: " << age<< '\n';

}
