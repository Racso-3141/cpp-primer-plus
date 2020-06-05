#include <iostream>
#include "bank.h"
Bank_account::Bank_account(const std::string & name,
  std::string account_number, double balance) {
    m_name = name;
    m_account_number = account_number;
    m_balance = balance;
  }
void Bank_account::display() const {
  std::cout << "Depositor's name: " << m_name << std::endl;
  std::cout << "account_number: " << m_account_number << std::endl;
  std::cout << "Balance: " << m_balance << std::endl;
}
void Bank_account::withdraw(double wd_amount) {
  m_balance -= wd_amount;
  std::cout << wd_amount << " has been withdrawn." << '\n';
  std::cout << m_balance << " remain." << '\n';
}
void Bank_account::deposit(double dp_amount) {
  m_balance += dp_amount;
  std::cout << dp_amount << " has been deposited." << '\n';
  std::cout << m_balance << " remain." << '\n';
}
