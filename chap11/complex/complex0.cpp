//complex0.cpp implementation of functions
#include "complex0.h"

//implementation of operators
complex complex::operator+(const complex& c) const {
  return complex(real + c.real, imaginary + c.imaginary);
}
complex complex::operator-(const complex& c) const {
  return complex(real - c.real, imaginary - c.imaginary);
}
complex complex::operator*(const complex& c) const {
  return complex((real * c.real) - (imaginary * c.imaginary),
    (real * c.imaginary) + (imaginary * c.real));
}
complex complex::operator~() {
  imaginary = -imaginary;
  return *this;
}

//friend functions
complex operator*(double d, const complex& c) {
  return complex(d * c.real, d * c.imaginary);
}
//display
std::ostream & operator<<(std::ostream & os, const complex& c) {
  os <<  "(" << c.real << ", " << c.imaginary << "i)\n";
  return os;
}

std::istream & operator>>(std:: istream& is, complex& c) {
  std::cout << "real: ";
   if (is >> c.real) {
     std::cout << "imaginary: ";
     is >> c.imaginary;
   }
   return is;
}
