#include "golf.h"
#include <cstring>
#include <iostream>
// non-interactive version:
// function sets golf structure to provided name, handicap
// using values passed as arguments to the function
void setgolf(golf & g, const char * name, int hc) {
  strcpy(g.fullname, name);
  g.handicap = hc;
}
// interactive version:
// function solicits name and handicap from user
// and sets the members of g to the values entered
// returns 1 if name is entered, 0 if name is empty string
int setgolf(golf & g) {
  using std::cin;
  using std::cout;
  cout << "Enter full name of the player: ";
  std::cin.get(g.fullname, 50);
  if (g.fullname[0] == '\0') {
    cin.clear();
    cin.get();
    return 0;
  } else {
    while (cin.get() != '\n')
			continue;
    cout << "Enter player's handicap: ";
    cin >> g.handicap;
    cin.get();
  }
  return 1;
}
// function resets handicap to new value
void handicap(golf & g, int hc) {
  using std::cin;
  using std::cout;
  g.handicap = hc;
  cout << "the handicap of " << g.fullname << " has been reset to "
  << hc << std::endl;
}
// function displays contents of golf structure
void showgolf(const golf & g) {
  std::cout << "Full name: " <<  g.fullname << '\n';
  std::cout << "Handicap: " << g.handicap << '\n';
}
