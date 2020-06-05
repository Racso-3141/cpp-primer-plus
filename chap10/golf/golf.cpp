#include "golf.h"
#include <cstring>
#include <iostream>
// non-interactive version:
Golf::Golf(const char * name, int hc) {
  strcpy(fullname_, name);
  handicap_ = hc;
}
// interactive version:
void Golf::setgolf() {
  using std::cin;
  using std::cout;
  char name[50];
  int _handicap;
  cout << "Enter full name of the player: ";
  std::cin.get(name, 50);
  if (name[0] == '\0') {
    cin.clear();
    cin.get();
  } else {
    while (cin.get() != '\n')
			continue;
    cout << "Enter player's handicap: ";
    cin >> _handicap;
    cin.get();
  }
  *this = Golf(name, _handicap);
}
// function resets handicap to new value
void Golf::handicap(int hc) {
  this->handicap_ = hc;
}
// function displays contents of golf structure
void Golf::showgolf() const {
  std::cout << "Full name: " << this->fullname_ << '\n';
  std::cout << "Handicap: " << this->handicap_ << '\n';
}
