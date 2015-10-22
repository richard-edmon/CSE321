#include <iostream>
#include "bankAccount.h"
using namespace std;

int main() {

  cout << "Creating objects using constructos" << endl;
  BankAccount b1("Richard", "21234212", 100000.0);
  b1.show();

  BankAccount b2=BankAccount("Person", "00032323", 123929.0);
  b2.show();

  cout << "Deposit money to b1" << endl;;
  b1.deposit(2500.0);
  b1.show();

  cout << "withdraw money from b2" << endl;;
  b2.withdraw(200.0);
  b2.show();

  return 0;
}
