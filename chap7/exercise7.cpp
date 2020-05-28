// rewrite 7.7
const int Max = 5;
#include <iostream>
// function prototypes
double* fill_array(double * begin, double * end);
void show_array(double * begin, double * end); // don't change data
void revalue(double, double * begin, double * end);
using namespace std;
int main() {

  double properties[Max];
  double * p = fill_array(properties, properties + Max);
  show_array(properties, p);
  if (p > properties) {
    cout << "Enter revaluation factor: ";
    double factor;
    while (!(cin >> factor)) {
      cin.clear();
      while (cin.get() != '\n')
        continue;
      cout << "Bad input; Please enter a number: ";
  }
  revalue(factor, properties, p);
  show_array(properties, p);
}
cout << "Done.\n"; cin.get(); cin.get();
return 0;
}
double* fill_array(double * begin, double * end) {
  double temp;
  double * p;
  for (p = begin; p < end; p++) {
    cout << "Enter value #" << (p - begin + 1) << ": ";
    cin >> temp;
    if (!cin) {
      cin.clear();
      while (cin.get() != '\n')
        continue;
      cout << "Bad input; input process terminated.\n";
      break;
    }
    else if (temp < 0)
      break;
    *p = temp;
  }
  return p;
}
// signal to terminate
// the following function can use, but not alter, // the array whose address is ar
void show_array(double * begin, double * end) {
  for (double * p = begin; p < end; p++) {
    cout << "Property #" << (p - begin + 1) << ": $";
    cout << *p << endl;
  }
}
// multiplies each element of ar[] by r
void revalue(double r, double * begin, double * end) {
  for (double * p = begin; p < end; p++) {
    (*p) *= r;
  }
}
