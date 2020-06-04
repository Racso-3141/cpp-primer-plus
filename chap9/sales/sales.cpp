#include <iostream>
#include "sales.h"
namespace SALES {
  using std::cout;
  using std::cin;
  using std::endl;
  // copies the lesser of 4 or n items from the array ar
  // to the sales member of s and computes and stores the
  // average, maximum, and minimum values of the entered items;
  // remaining elements of sales, if any, set to 0
  void setSales(Sales & s, const double ar[], int n) {
    int range = n < QUARTERS ? n : QUARTERS;
    double sum = 0;
    s.min = ar[0];
    s.max = ar[0];
    for(int i = 0; i < range; i++) {
      s.sales[i] = ar[i];
      sum += ar[i];
      if (ar[i] > s.max) {
        s.max = ar[i];
      } else if(ar[i] < s.min) {
        s.min = ar[i];
      }
    }
    s.average = sum / range;
    for(int j = range; j < QUARTERS; j++) {
      s.sales[j] = 0;
    }
  }
  // gathers sales for 4 quarters interactively, stores them
  // in the sales member of s and computes and stores the
  // average, maximum, and minimum values
  void setSales(Sales & s) {
    int i = 0;
    //fill sales[]
    cout << "Enter sale value: ";
    while (cin >> s.sales[i] && i < QUARTERS) {
      i++;
      cout << "Enter sale value for #Quarter" << (i + 1) << ": ";
    }

    //calculate average
    double sum = 0.0;
    for(int j = 0; j < QUARTERS; j++) {
      sum += s.sales[j];
    }
    s.average = sum / QUARTERS;

    //find max and min sale
    s.min = s.sales[0];
    s.max = s.sales[0];
    for(int k = 1; k < QUARTERS; k++) {
      if(s.sales[k] > s.max) {
        s.max = s.sales[k];
      } else if(s.sales[k] < s.min) {
        s.min = s.sales[k];
      }
    }
  }
  // display all information in structure s
  void showSales(const Sales & s) {
    for(int i = 0; i < QUARTERS; i++) {
      cout << "#Quarter" << (i + 1)  << ": " << s.sales[i] << endl;
    }
    cout << "average: " << s.average << endl;
    cout << "min: " << s.min << endl;
    cout << "max: " << s.max << endl;
  }

}
