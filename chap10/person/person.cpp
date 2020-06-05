#include <iostream>
#include <cstring>
#include "person.h"
Person::Person(const std::string & ln, const char * fn) {
  lname = ln;
  strcpy(fname, fn);
}
// firstname lastname format
void Person::Show() const {
  std::cout << fname << " " << lname << '\n';
}
 // lastname, firstname format
void Person::FormalShow() const {
  std::cout << lname << " " << fname << '\n';
}
