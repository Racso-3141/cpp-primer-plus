//exercise 6 contributors
#include <iostream>
#include <cstring>
using namespace std;
struct contributor {
  string name;
  double contribution;
};
int main(int argc, char const *argv[]) {
  int count;
  cout << "Enter the number of contributors: ";
  cin >> count;
  cin.get();
  contributor contributors[count];
  int Grand[count];
  int Patron[count];
  int grand = 0;
  int patron = 0;

  //Initialize contributors information
  int i = 0;
  while (i < count) {
    cout << "Enter the name of contributor #" << (i + 1) << ": ";
    getline(cin, contributors[i].name);
    cout << "Enter the contribution amount of contributor #" << (i + 1) << ": ";
    cin >> contributors[i].contribution;
    cin.get();
    if (contributors[i].contribution >= 10000) {
      Grand[grand++] = i;
    } else {
      Patron[patron++] = i;
    }
    i++;
  }

  //display grand patrons
  cout << "Grand Patrons\n";
  if (grand == 0) {
    cout << "None\n";
  }
  //cout << "Name      Amount\n";
  for (int j = 0; j < grand; j++) {
    cout << contributors[Grand[j]].name << "      "
    << contributors[Grand[j]].contribution << endl;
  }
  //display patrons
  cout << "Patrons\n";
  if (patron == 0) {
    cout << "None\n";
  }
  //cout << "Name      Amount\n";
  for (int k = 0; k < patron; k++) {
    cout << contributors[Patron[k]].name << "      "
    << contributors[Patron[k]].contribution << endl;
  }
  return 0;
}
