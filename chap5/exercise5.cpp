//exercise 5 month sales
#include <iostream>
#include <string>
int main(int argc, char const *argv[]) {
  using namespace std;
  char* months[12] = {
    "January", "Ferruary", "March", "April", "May", "June", "July", "August",
    "September", "October", "November", "December"
  };
  int sales[12];
  int sum = 0;
  for (int i = 0; i < 12; i++) {
    std::cout << "Enter sales of C++ books in " << months[i] <<": ";
    std::cin >> sales[i];
    sum += sales[i];
  }
  std::cout << "The total sales is: "<<sum << '\n';
  return 0;
}
