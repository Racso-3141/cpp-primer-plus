#include <iostream>
#include "golf.h"
const int SIZE = 5;
int main(int argc, char const *argv[]) {
  golf players[SIZE];
  int i = 0;

  //test int setgolf(golf & g)
  while (i < SIZE && setgolf(players[i])) {
    showgolf(players[i]);
    i++;
  }

  // test void setgolf(golf & g, const char * name, int hc)
  setgolf(players[4], "Enxu Han", 32);
  showgolf(players[4]);

  //test void handicap(golf & g, int hc)
  handicap(players[4], 33);
  showgolf(players[4]);

  return 0;
}
