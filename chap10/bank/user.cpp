#include <iostream>
#include "bank.h"
int main(int argc, char const *argv[]) {
  //initialize the first bank account
  Bank_account b1 = Bank_account();
  //display
  b1.display();
  //withdraw money
  b1.withdraw(100);
  //deposit money
  b1.deposit(200);

  //initialize the first bank account
  Bank_account b2 = Bank_account("21 Savage", "4514421312341", 3131241313.1);
  //display
  b2.display();
  //withdraw money
  b2.withdraw(3132213.43);
  //deposit money
  b2.deposit(2003123421.11);
  return 0;
}
