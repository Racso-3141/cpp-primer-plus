#include <iostream>
int fac(int);
int main(int argc, char const *argv[]) {
  using namespace std;
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;
  while(n < 0 || !cin) {
    cin.clear();
    cin.get();
    cout << "Invalid, Enter a positive integer instead: ";
    cin >> n;
  }
  cout << "fac(" << n << ") is " << fac(n) << endl;
  return 0;
}
int fac(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }
  return n * fac(n - 1);
}
