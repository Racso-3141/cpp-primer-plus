#include <iostream>
#include "sales.h"
int main() {
 using SALES::showSales;
 using SALES::setSales;
 using SALES::Sales;

 Sales blue;
 double vals[3] = {2000.3, 3000.4, 5000.5};
 setSales(blue, vals, 3);
 SALES::showSales(blue);

 Sales red;
 setSales(red);
 showSales(red);
 return 0;
}
