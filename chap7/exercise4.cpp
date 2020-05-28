#include <iostream>
long double prob(unsigned, unsigned, unsigned);
int main(int argc, char const *argv[]) {
  using namespace std;
  double total, choices, mega;
  cout << "Enter the total number of choices on game card and\n"
          "the number of picks allowed:\n"
          "the number of mega.\n";
  while ((cin >> total >> choices >> mega) && choices <= total) {
    cout << "You have one chance in ";
    cout << prob(total, choices, mega);
    cout << " of winning." << endl;
    cout << "Next two numbers (q to quit): ";
  }
  return 0;
}
long double prob(unsigned numbers, unsigned picks, unsigned mega) {
  long double result = 1.0;
  long double n;
  unsigned p;

  for (n = numbers, p = picks; p > 0; n--, p--)
    result = result * n / p;
  return result * 1/mega;
}
