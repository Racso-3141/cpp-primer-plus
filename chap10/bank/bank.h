#ifndef BANK_H
#define BANK_H

#include <string>

class Bank_account
{
private:
  std::string m_name;
  std::string m_account_number;
  double m_balance;
public:
  Bank_account(const std::string & name = "Wang Lei",
    std::string account_number = "0000000", double balance = 0.0);
  void display() const;
  void withdraw(double wd_amount);
  void deposit(double dp_amount);
};

#endif
