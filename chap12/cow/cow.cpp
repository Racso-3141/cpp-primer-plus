#include "cow.h"
#include <cstring>
#include <iostream>

Cow::Cow() {
  std::strcpy(name, "Bossie");
  hobby = new char[1];
  hobby[0] = '\0';
  weight = 150.5;
}
Cow::Cow(const char * nm, const char * ho, double wt) {
  std::strcpy(name, nm);
  hobby = new char[std::strlen(ho) + 1];
  std::strcpy(hobby, ho);
  weight = wt;
}
Cow::Cow(const Cow& c) {
  std::strcpy(name, c.name);
  hobby = new char[std::strlen(c.hobby) + 1];
  strcpy(hobby, c.hobby);
  weight = c.weight;
}
Cow::~Cow() {
  std::cout << name << " is over." << '\n';
  delete[] hobby;
}
Cow & Cow::operator=(const Cow & c) {
  if (this == &c) {
    return *this;
  }
  delete [] hobby;
  std::strcpy(name, c.name);
  hobby = new char[std::strlen(c.hobby) + 1];
  strcpy(hobby, c.hobby);
  weight = c.weight;
  return *this;
}

// display all cow data
void Cow::ShowCow() const {
  std::cout << name << "'s hobby is " << hobby << ", and weight is "
  << weight << '\n';
}
