// golf.h -- with class
#ifndef GOLF_H
#define GOLF_H
const int Len = 40;
class Golf {
private:
    int handicap_;
    char fullname_[Len];
public:
  // non-interactive version:
  Golf(const char * name, int hc);
  // interactive version:
  void setgolf();
  // function resets handicap to new value
  void handicap(int hc);
  // function displays contents of golf structure
  void showgolf() const;
};
#endif
