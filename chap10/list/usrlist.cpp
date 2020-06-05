#include "list.h"
#include <iostream>

void display(const Item & item);

int main(int argc, char const *argv[]) {
  //Initialize a new List
  List l = List();
  //test isempty()
  std::cout << l.isempty() << '\n';
  //fill the list
  while (!l.isfull()) {
    Item item;
    std::cout << "Enter information for a new player: " << '\n';
    std::cout << "Name: ";
    getline(std::cin, item.name);
    std::cout << "Position: ";
    getline(std::cin, item.position);
    std::cout << "height: ";
    std::cin >> item.height;
    std::cin.get();
    l.add(item);
  }
  //visit the whole list
  l.visit(display);
  return 0;
}
void display(const Item & item) {
  std::cout << item.name << " is a " << item.height << " " << item.position
    << '\n';
}
