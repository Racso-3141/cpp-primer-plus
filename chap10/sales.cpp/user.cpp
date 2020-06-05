#include <iostream>
#include "sales.h"

int main() {
  using SALES::Sales;

  double vals[3] = {2000.3, 3000.4, 5000.5};
  Sales blue(vals, 3);
  blue.showSales();

  Sales red = Sales();
  red.setSales();
  red.showSales();
  return 0;
}
