#include <iostream>
void fill_arr(int arr[], int);
void display(int arr[], int);
double average(int arr[], int);
int main(int argc, char const *argv[]) {
  using namespace std;
  const int size = 10;
  int scores[size];
  fill_arr(scores, size);
  display(scores, size);
  cout << "\nThe average score is: " << average(scores, size) << endl;
  return 0;
}
void fill_arr(int arr[], int limit) {
  using namespace std;
  int i = 0;
  while (i < limit) {
    cout << "Enter golf score #" << (i + 1) << ": ";
    cin >> arr[i];
    // while (!cin) {
    //   cin.clear();
    //   cin.get();
    //   cout << "Please enter valid input.\n";
    //   cout << "Enter golf score #" << (i + 1) << ": ";
    //   cin >> arr[i];
    // }
    //cin.get();
    i++;
  }
}
void display(int arr[], int limit) {
  using namespace std;
  int j = 0;
  while (j < limit) {
    cout << arr[j] << " ";
    j++;
  }
}
double average(int arr[], int limit) {
  double sum = 0.0;
  for (int k = 0; k < limit; k++) {
    sum += arr[k];
  }
  return sum/limit;
}
