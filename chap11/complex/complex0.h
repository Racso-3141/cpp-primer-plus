//complex0.h-definition for a complex class
#ifndef  COMPLEX0_H
#define  COMPLEX0_H
#include <iostream>

class complex {
private:
  double real;
  double imaginary;
public:
  complex(double r, double i) {real = r; imaginary = i;}
  complex() {real = 0.0; imaginary = 0.0;}
  complex operator+(const complex&) const;
  complex operator-(const complex&) const;
  complex operator*(const complex&) const;
  complex operator~();

  //friend functions
  friend complex operator*(double, const complex&);
  friend std::ostream & operator<<(std::ostream& , const  complex&);
  friend std::istream & operator>>(std:: istream&, complex&);
};







#endif
