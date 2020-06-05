// stacker.cpp -- testing the Stack class
#include <iostream>
#include <cctype> // or ctype.h
#include "stack.h"
void get_customer(customer &);
int main() {
  using namespace std;
  Stack st; // create an empty stack
  char ch;
  customer cmr;
  double total = 0.0;
  cout << "Please enter A to add a purchase order,\n"
    << "P to process a PO, or Q to quit.\n";
  while (cin >> ch && toupper(ch) != 'Q')
  {
    while (cin.get() != '\n')
      continue;
    if (!isalpha(ch)) {
      cout << '\a';
      continue;
    }
    switch(ch)
    {
      case 'A':
      case 'a':
        cout << "Enter a PO number to add: \n";
        get_customer(cmr);
        if (st.isfull())
          cout << "stack already full\n";
        else
          st.push(cmr);
        break;
      case 'P':
      case 'p': if (st.isempty())
                  cout << "stack already empty\n";
                else {
                  total += cmr.payment;
                  st.pop(cmr);
                  std::cout << "The running total now is " << total << '\n';
                }
                break;
    }
    cout << "Please enter A to add a purchase order,\n"
      << "P to process a PO, or Q to quit.\n";
  }
  cout << "Bye\n";
  return 0;
}

void get_customer(customer & c) {
  std::cout << "Enter full name of customer: ";
  std::cin.getline(c.fullname, 50);
  std::cout << "Enter payment of customer: ";
  std::cin >> c.payment;
  while (std::cin.get() != '\n')
    continue;
}
