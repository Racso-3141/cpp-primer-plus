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
  Sales::Sales(const double ar[], int n) {
    int range = n < QUARTERS ? n : QUARTERS;
    double sum = 0;
    min = ar[0];
    max = ar[0];
    for(int i = 0; i < range; i++) {
      sales[i] = ar[i];
      sum += ar[i];
      if (ar[i] > max) {
        max = ar[i];
      } else if(ar[i] < min) {
        min = ar[i];
      }
    }
    average = sum / range;
    for(int j = range; j < QUARTERS; j++) {
      sales[j] = 0;
    }
  }

  //default constructor
  Sales::Sales()
 {
   min = 0;
   max = 0;
   average = 0;
   for (int i = 0; i < QUARTERS; i++)
   sales[i] =0;
 }

  // gathers sales for 4 quarters interactively, stores them
  // in the sales member of s and computes and stores the
  // average, maximum, and minimum values
  void Sales::setSales() {
    int k = 0;
    double ca[QUARTERS];
    //fill ca[]
    cout << "Enter sale value for #Quarter1: ";
    while (cin >> ca[k] && k < QUARTERS) {
      k++;
      cout << "Enter sale value for #Quarter" << (k + 1) << ": ";
    }

    //Initialize with constructor temporary object
    *this = Sales(ca, QUARTERS);
  }

  // display all information in structure s
  void Sales::showSales() const {
    for(int i = 0; i < QUARTERS; i++) {
      cout << "#Quarter" << (i + 1)  << ": " << sales[i] << endl;
    }
    cout << "average: " << average << endl;
    cout << "min: " << min << endl;
    cout << "max: " << max << endl;
  }

}
