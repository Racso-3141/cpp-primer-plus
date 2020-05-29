// rewrite of 7.15
#include <iostream>
using namespace std;
const int Seasons = 4;
const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

//protypes
void fill(double (*)[Seasons]);
void show(double da[]);
//function to modify array of char pointers

int main(int argc, char const *argv[]) {
  double expenses[Seasons];
  fill(&expenses);
  show(expenses);
  return 0;
}

void fill(double (*pa)[Seasons]) {
  for (int i = 0; i < Seasons; i++) {
    cout << "Enter " << Snames[i] << " expenses: ";
    cin >> (*pa)[i];
  }
}

void show(double da[Seasons]) {
  double total = 0.0;
  cout << "\nEXPENSES\n";
  for (int i = 0; i < Seasons; i++)
  {
    cout << Snames[i] << ": $" << da[i] << endl;
    total += da[i];
  }
  cout << "Total Expenses: $" << total << endl;
}
