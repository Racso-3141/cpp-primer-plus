#include <iostream>
#include <string>

struct player {
  std::string name;
  std::string position;
  double height;
};

typedef player Item;

class List
{
private:
  enum {MAX = 3};
  Item items[MAX];
  int top;
public:
  List(); //Initialize list
  bool isempty() const; //return true when list is empty
  bool isfull() const; //return true when list is full
  void add(const Item& item); //add item to list
  void visit(void (*pf)(const Item &)); //visit all items in list
  void display(); //display name, position, and height of one player
};
