#include <iostream>
#include "Ex1bankAccount.h"
#include <string>
using namespace std;

BankAccount::BankAccount() {
  cout << "Default constructor called" << endl;
  name = "no name";
  number = "0";
  balance = 0.0;
}

BankAccount::BankAccount(const string & nam, const string & num, double bal) {
  cout << "Constructor using " << nam << " called" << endl;
  name = nam;
  number = num;
  balance = bal;
}

// class destructor
BankAccount::~BankAccount() {
  cout << "Bye, " << name << "!\n";
}


// other methods
void BankAccount::show() {
  cout << "Depositor's name: " << name << endl
	    << "Account number: " << number << endl
	    << "Balance: " << balance << endl;
}

void BankAccount::deposit(double n) {
  balance += n;
}

void BankAccount::withdraw(double n) {
  balance -= n;
}
