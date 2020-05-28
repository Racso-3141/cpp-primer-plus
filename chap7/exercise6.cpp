#include <iostream>
const int Max = 6;
using namespace std;
int fill_arr(double arr[], int);
void display(double arr[], int);
void reverse(double *, int);
int main(int argc, char const *argv[]) {
  double arr[Max];
  fill_arr(arr, Max);
  cout << "display before reverse: \n";
  display(arr, Max);
  reverse(arr, Max);
  cout << "display after first reverse: \n";
  display(arr, Max);
  double temp = arr[0];
  arr[0] = arr[Max - 1];
  arr[Max - 1] = temp;
  cout << "display after second reverse: \n";
  display(arr, Max);
  return 0;
}
int fill_arr(double arr[], int limit) {
  int i = 0;
  while (i < limit) {
    cout << "Enter value #" << (i + 1) << ": ";
    cin >> arr[i];
    if (!cin) {
      cout << "Invalid input. Terminated." <<endl;
      break;
    }
    i++;
  }
  return (i + 1);
}
void display(double arr[], int limit) {
  cout << "display elements in array.\n";
  for (int j = 0; j < limit; j++) {
    cout << arr[j] <<endl;
  }
}
void reverse(double * par, int size) {
  double temp;
  for(int k = 0; k < size / 2; k++) {
    temp = *(par + k);
    *(par + k) = *(par + size - 1 - k);
    *(par + size - 1 - k) = temp;
  }
}
