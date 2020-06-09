// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "cmp.h"
#include <cstdlib>

// construct Stonewt object from double value FLOAT unit
Stonewt::Stonewt(double lbs)
{
  stone = int (lbs) / Lbs_per_stn; // integer division
  pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
  pounds = lbs;
  unit = FLOAT;
}

// construct Stonewt object from stone, double values STONE unit
Stonewt::Stonewt(int stn, double lbs)
{
  stone = stn;
  pds_left = lbs;
  pounds = stn * Lbs_per_stn +lbs;
  unit = STONE;
}

Stonewt::Stonewt() // default constructor, wt = 0
{
  stone = pounds = pds_left = 0;
  unit = FLOAT;
}

Stonewt::~Stonewt() // destructor
{
}

//Friend functions implementation
//add 2 weights
Stonewt operator+(Stonewt& st1, Stonewt& st2) {
  return Stonewt(st1.pounds + st2.pounds);
}

//add 2 weights
Stonewt operator-(Stonewt& st1, Stonewt& st2) {
  return Stonewt(abs(st1.pounds - st2.pounds));
}

//add 2 weights
Stonewt operator*(Stonewt& st1, Stonewt& st2) {
  return Stonewt(st1.pounds * st2.pounds);
}

//display weight according to their unit
std::ostream & operator<<(std::ostream & os, const Stonewt & st) {
  if (st.unit == Stonewt::STONE)
    os << st.stone << " stone, " << st.pds_left << " pounds\n";
  else if (st.unit == Stonewt::FLOAT)
    os << st.pounds << " pounds\n";
  else if (st.unit == Stonewt::INTEGER)
    os << int(st.pounds) << " pounds\n";
  else
    os << "Vector object mode is invalid";
  return os;
}

std::istream & operator>>(std:: istream& is, Stonewt& st) {
  is >> st.pounds;
  return is;
}

//friend relational functions implementation
bool operator>(const Stonewt& st1, const Stonewt& st2) {
  return st1.pounds > st2.pounds;
}
bool operator<(const Stonewt& st1, const Stonewt& st2) {
  return st1.pounds < st2.pounds;
}
bool operator==(const Stonewt& st1, const Stonewt& st2) {
  return st1.pounds == st2.pounds;
}
bool operator>=(const Stonewt& st1, const Stonewt& st2) {
  return st1.pounds >= st2.pounds;
}
bool operator<=(const Stonewt& st1, const Stonewt& st2) {
  return st1.pounds <= st2.pounds;
}
bool operator!=(const Stonewt& st1, const Stonewt& st2) {
  return st1.pounds != st2.pounds;
}
