//exercise 6 month sales in 2-dimension array
#include <iostream>
#include <string>
int main(int argc, char const *argv[]) {
  using namespace std;
  char* months[12] = {
    "January", "Ferruary", "March", "April", "May", "June", "July", "August",
    "September", "October", "November", "December"
  };
  string years[3] = {
    "first", "second", "third"
  };
  int sales[3][12];
  int sum = 0;
  for (int i = 0; i < 3; i++) {
    std::cout << "Enter sales of C++ books in the " << years[i] <<" year: " <<endl;
    for (int j = 0; j < 12; j++) {
      std::cout << "Enter sales of C++ books in " << months[j] <<": ";
      std::cin >> sales[i][j];
      sum += sales[i][j];
    }
    std::cout << "The sales of the " << years[i] << " year is "<< sum << '\n';
  }

  std::cout << "The total sales is: "<<sum << '\n';
  return 0;
}
