#include "plorg.h"
#include <iostream>
#include <cstring>

Plorg::Plorg(const char* str, int CI_num) {
  strcpy(name, str);
  CI = CI_num;
}

void Plorg::reset_CI(int num) {
  CI = num;
}

void Plorg::display() const {
  std::cout << "Name: " << name << '\n';
  std::cout << "CI: " << CI << '\n';
}
