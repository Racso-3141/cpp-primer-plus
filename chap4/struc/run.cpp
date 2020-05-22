#include <iostream>
#include <array>
int main(int argc, char const *argv[]) {
  using namespace std;
  array<double, 3> times;
  cout << "Enter the 3 times: ";
  cin >> times[0] >> times[1] >> times[2];
  cout << "first time: " <<times[0] << '\n';
  cout << "second time: " <<times[1] << '\n';
  cout << "third time: " <<times[2] << '\n';
  cout << "Average score is: " <<(times[0] + times[1] + times[2])/3.0 << endl;
  return 0;
}
