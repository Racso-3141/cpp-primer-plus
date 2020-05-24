//exercise 10
#include <iostream>
int main(int argc, char const *argv[]) {
  using namespace std;
  cout << "Enter number of rows: ";
  int rows;
  cin >> rows;
  for(int i = 0; i < rows; i++) {
    for(int j = (rows - 1 - i); j >= 0; j--) {
      cout << ".";
    }
    for(int k = 0; k < i; k++) {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}
