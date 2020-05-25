//exercise 5 tax
#include <iostream>
const double LEV_1 = 5000;
const double LEV_2 = 15000;
const double LEV_3 = 35000;
const double RATE_1 = 0;
const double RATE_2 = 0.1;
const double RATE_3 = 0.15;
const double RATE_4 = 0.2;

int main() {
  using namespace std;
  double salaray;
  cout << "Enter your salaray: ";
  cin >> salaray;
  double tax = 0;
  while (salaray >= 0) {
    if (salaray <= LEV_1) {
      tax = RATE_1 * LEV_1;
    } else if (salaray > LEV_1 && salaray <= LEV_2) {
      tax = RATE_1 * LEV_1 + RATE_2 * (salaray - LEV_1);
    } else if (salaray > LEV_2 && salaray <= LEV_3) {
      tax = RATE_1 * LEV_1 + RATE_2 * (LEV_2 - LEV_1) + (salaray - LEV_2) * RATE_3;
    } else {
      tax = RATE_1 * LEV_1 + RATE_2 * (LEV_2 - LEV_1) + RATE_3 * (LEV_3 - LEV_2) * RATE_4 * (salaray - LEV_3);
    }
    cout << "Your text in total is " << tax << endl;
    cout << "Enter your salaray: ";
    cin >> salaray;
  }
  cout << "Bye" << endl;
  return 0;
}
