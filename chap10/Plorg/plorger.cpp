#include "plorg.h"
#include <iostream>

int main(int argc, char const *argv[]) {

  //Initialize with default constructor, 1 argument constructor, 2 arguments
  //constructors
  Plorg p1 = Plorg();
  Plorg p2("Enxu Han");
  Plorg p3("Oscar", 54);

  //display all objects
  p1.display();
  p2.display();
  p3.display();

  //reset CI number
  p1.reset_CI(12);
  p1.display();
  p2.reset_CI(51);
  p2.display();
  p3.reset_CI(82);
  p3.display();

  return 0;
}
