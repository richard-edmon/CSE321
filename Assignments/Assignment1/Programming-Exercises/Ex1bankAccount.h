#ifndef ex1BankAccount_H_
#define ex1BankAccount_H_
#include <string>
using namespace std;

class BankAccount {
 private:
  string name;
  string number;
  double balance;

 public:
  BankAccount();//default constructor
  BankAccount(const string & nam, const string & num, double bal);
  void show();
  void deposite(double n);
  void withdraw(double n);
  ~BankAccount();
};
#endif
