#include <iostream>
int main(int argc, char const *argv[]) {
  using namespace std;
  const double km_to_mile = 62.14 / 100;
  const double liter_to_gallon = 1 / 3.875;
  cout << "Enter consumption figure in the European style (liters per 100 kilometers): ";
  double Euro_figure;
  cin >> Euro_figure;
  double US_figure = (1 / Euro_figure) * km_to_mile / liter_to_gallon;
  cout << "consumption figure in the US style is "<<US_figure << endl;
  return 0;
}
