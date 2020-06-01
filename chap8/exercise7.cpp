// tempover.cpp -- template overloading
#include <iostream>

template <typename T> // template A
T sumArray(T arr[], int);
template <typename T> // template B
T sumArray(T * arr[], int);

struct debts
{
 char name[50];
 double amount;
};

using namespace std;
int main() {
  int things[6] = {13, 31, 103, 301, 310, 130};
   struct debts mr_E[3] =
   {
   {"Ima Wolfe", 2400.0},
   {"Ura Foxe", 1300.0},
   {"Iby Stout", 1800.0}
   };
   double * pd[3];
   for (int i = 0; i < 3; i++)
    pd[i] = &mr_E[i].amount;
   cout << "Total of Mr. E's things:\n";
   cout << sumArray(things, 6);
   cout << "Sum of Mr. E's debts:\n";
   cout << sumArray(pd, 3) << endl;
   return 0;
}

template <typename T>
 T sumArray(T arr[], int n) {
  T sum = 0;
  cout << "template A\n";
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  return sum;
}

template <typename T>
T sumArray(T * arr[], int n) {
  T sum = 0;
  cout << "template B\n";
  for (int i = 0; i < n; i++) {
    sum += *arr[i];
  }
  return sum;
}
