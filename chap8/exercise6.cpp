#include <iostream>
#include <cstring>
template <typename T>
T maxn(T arr[], int);

//explicit specialization
template <> char* maxn(char* [], int);

int main(int argc, char const *argv[]) {
  using namespace std;
  int arr1[] = {231, 334, 341, 531, 742, 432};
  double arr2[] = {321.1, 214.1, 312.5, 641.4};
  char* arr3[] = {"sffsdfaf", "gakjds", "afrgujr", "sdfasfs", "dfsaffs"};
  cout << "The max value of arr1 is " << maxn(arr1, 6) << endl;
  cout << "The max value of arr2 is " << maxn(arr2, 4) << endl;
  cout << "The address of string with longest length in arr3 is "
  << maxn(arr3, 5) << endl;
  return 0;
}

//template function for double or int
template <typename T>
T maxn(T arr[], int size) {
  T max = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

//explicit specialization
template <> char* maxn(char* arr[], int size) {
  int index = 0;
  for(int i = index; i < size; i++) {
    if (strlen(arr[i]) > strlen(arr[index])) {
      index = i;
    }
    i++;
  }
  return arr[index];
}
