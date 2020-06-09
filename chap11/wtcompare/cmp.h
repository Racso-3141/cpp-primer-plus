// cmp.h -- definition for the Stonewt class
#ifndef CMP_H_
#define CMP_H_
#include <iostream>

class Stonewt
{
  public:
    enum Unit{STONE, INTEGER, FLOAT};
  private:
    enum {Lbs_per_stn  = 14}; // pounds per stone
    int stone; // whole stones
    double pds_left; // fractional pounds
    double pounds; // entire weight in pounds
    Unit unit;

  public:
    Stonewt(double lbs); // constructor for double pounds
    Stonewt(int stn, double lbs); // constructor for stone, lbs
    Stonewt(); // default constructor
    ~Stonewt();
    void setUnit(Unit u) {this->unit = u;}

    //friend functions
    friend std::ostream & operator<<(std::ostream& , const  Stonewt&);
    friend std::istream & operator>>(std:: istream&, Stonewt&);
    friend Stonewt operator+(Stonewt&, Stonewt&);
    friend Stonewt operator-(Stonewt&, Stonewt&);
    friend Stonewt operator*(Stonewt&, Stonewt&);

    //friend functions relational
    friend bool operator>(const Stonewt&, const Stonewt&);
    friend bool operator<(const Stonewt&, const Stonewt&);
    friend bool operator==(const Stonewt&, const Stonewt&);
    friend bool operator>=(const Stonewt&, const Stonewt&);
    friend bool operator<=(const Stonewt&, const Stonewt&);
    friend bool operator!=(const Stonewt&, const Stonewt&);

};

#endif
