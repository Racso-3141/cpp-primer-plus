//exercise1 harmonic mean calculation
#include <iostream>
double harmonic_mean(double, double);
int main(int argc, char const *argv[]) {
  using namespace std;
  double x, y;
  cout << "Enter value of x, y, until one of them is 0.\n";
  cout << "Enter the value of x: ";
  cin >> x;
  cout << "Enter the value of y: ";
  cin >> y;
  while (x != 0 && y != 0) {
     cout << "The harmonic mean of " << "(" << x << ", " << y << ")"
     << " is " << harmonic_mean(x, y) << endl;
     cout << "Enter the value of x: ";
     cin >> x;
     cout << "Enter the value of y: ";
     cin >> y;
  }
  cout << "Bye.\n";
  return 0;
}
double harmonic_mean(double x, double y) {
  return 2.0 * x * y / (x + y);
}
