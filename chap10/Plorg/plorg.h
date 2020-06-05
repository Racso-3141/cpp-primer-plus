#include <iostream>

const int LEN = 19;

class Plorg {
  private:
    char name[LEN];
    int CI;
  public:
    Plorg(const char* str = "Plorga", int CI_num = 50);
    void reset_CI(int num);
    void display() const;
};
