//mover.cpp
#include <iostream>
#include "move.h"

int main(int argc, char const *argv[]) {
  //test constructor and showmove
  Move m(15, 20);
  m.showmove();

  //test add
  Move mo(4 , -5);
  m.add(mo);
  m.showmove();

  //reset move
  m.reset(1, 2);
  m.showmove();

  return 0;
}
