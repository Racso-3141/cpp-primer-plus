// rewrite of 7.15 with struture of expenses
#include <iostream>
using namespace std;
const int Seasons = 4;
const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

struct expense {
  double arr[Seasons];
};

//protypes
void fill(expense*);
void show(expense);
//function to modify array of char pointers

int main(int argc, char const *argv[]) {
  expense expenses;
  fill(&expenses);
  show(expenses);
  return 0;
}

void fill(expense* pe) {
  for (int i = 0; i < Seasons; i++) {
    cout << "Enter " << Snames[i] << " expenses: ";
    cin >> pe->arr[i];
  }
}

void show(expense da) {
  double total = 0.0;
  cout << "\nEXPENSES\n";
  for (int i = 0; i < Seasons; i++)
  {
    cout << Snames[i] << ": $" << da.arr[i] << endl;
    total += da.arr[i];
  }
  cout << "Total Expenses: $" << total << endl;
}
