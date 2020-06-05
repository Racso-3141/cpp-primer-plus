#include "list.h"
#include <iostream>

List::List() {
  top = 0;
}

bool List::isempty() const {
  return top == 0;
}

bool List::isfull() const {
  return top == MAX;
}

void List::add(const Item& item) {
  if (top < MAX) {
    items[top++] = item;
  } else {
    std::cout << "The list is already full." << '\n';
  }
}

void List::visit(void (*pf)(const Item &)) {
  for(int i = 0; i < MAX; i++) {
    (*pf)(items[i]);
  }
}
