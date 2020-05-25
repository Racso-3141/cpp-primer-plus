//exercise 2 donation
#include <iostream>
#include <cctype>
const int Max = 10;
int main(int argc, char const *argv[]) {
  using namespace std;
  //Initialize a double array to hold donation values
  double donations[Max];
  cout << "Please enter donation values." << '\n';
  cout << "You would enter up to 10 values." <<endl;
  cout << "donation #1: ";
  double value;
  int i = 0;
  while (i < Max && (cin >> value)) {
    donations[i] = value;
    i ++;
    if (i >= 10) {
      break;
    }
    cout << "donation #" << (i + 1) << ": ";
  }
  double sum = 0;
  for (int j = 0; j < i; j++) {
    sum += donations[j];
  }
  double average = sum / i;
  cout << "There are " << i << " donations in total,"
  << " and the average value is " << average;
  return 0;
}
