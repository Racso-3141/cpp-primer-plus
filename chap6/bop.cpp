#include <iostream>
using namespace std;
const int strsize = 20;
void showmenu();

//Structure
struct bop {
  char fullname[strsize]; // real name
  char title[strsize]; // job title
  char bopname[strsize]; // secret BOP name
  int preference; // 0 = fullname, 1 = title, 2 = bopname
};

int main(int argc, char const *argv[]) {
  //Initialize structure
  bop bops[3] = {
    {"Micheal Jordan", "SG", "GOAT", 2},
    {"Shaquille O'Neal", "C", "SHAQ", 0},
    {"Kobe Bryant", "SG", "MAMBA", 1}
  };
  showmenu();   //show menu bar
  char choice;
  cout << "Enter your choice: ";
  cin >> choice;
  while(choice != 'q') {
    switch (choice) {
      case 'a':
        for (int i = 0; i < 3; i++) {
          cout << bops[i].fullname << endl;
        }
        break;
      case 'b':
        for (int i = 0; i < 3; i++) {
          cout << bops[i].title << endl;
        }
        break;
      case 'c':
        for (int i = 0; i < 3; i++) {
          cout << bops[i].bopname << endl;
        }
        break;
      case 'd':
        for (int i = 0; i < 3; i++) {
          if (bops[i].preference == 0) {
            cout << bops[i].fullname << endl;
          } else if(bops[i].preference == 1) {
            cout << bops[i].title << endl;
          } else {
            cout << bops[i].bopname << endl;
          }
        }
        break;
    }
    showmenu();
    cout << "Enter your choice: ";
    cin >> choice;
  }
  cout << "Bye\n";
  return 0;
}

//menu function
void showmenu() {
  cout << "Benevolent Order of Programmers Report\n"
  "a) display by name        b) display by title\n"
  "c) display by bopname     d) display by preference\n"
  "q) quit\n";
}
