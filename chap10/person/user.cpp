#include "person.h"
#include <iostream>
int main(int argc, char const *argv[]) {
  //Initialize with no argument, 1 argument, and 2 arguments
  Person p1 = Person();
  Person p2 = Person("Oscar");
  Person p3 = Person("Enxu", "Han");

  //display all 3 objects
  p1.Show();
  p1.FormalShow();
  p2.Show();
  p2.FormalShow();
  p3.Show();
  p3.FormalShow();

  return 0;
}
