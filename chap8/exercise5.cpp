#include <iostream>
const int SIZE = 5;
template <typename T>
T max5(T arr[SIZE]);
int main(int argc, char const *argv[]) {
  using namespace std;
  int arr1[] = {231, 334, 341, 531, 432};
  double arr2[] = {321.1, 221.5, 214.1, 312.5, 641.4};
  cout << "The max value of arr1 is " << max5(arr1) << endl;
  cout << "The max value of arr2 is " << max5(arr2) << endl;
  return 0;
}
template <typename T>
T max5(T arr[SIZE]) {
  T max = arr[0];
  for (int i = 1; i < SIZE; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}
