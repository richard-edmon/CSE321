#ifndef Person_H_
#define Person_H_

#include <string>
#include <iostream>
using namespace std;

class Person {
 private:
  static const int LIMIT = 25;
  string lname; // Person’s last name
  char fname[LIMIT]; // Person’s first name
 public:
  Person() {lname = ""; fname[0] = '\0'; } // #1
  Person(const string & ln, const char * fn = "Heyyou"); // #2
  // Methods to display last name and first name
  void Show() const; // firstname lastname format
  void FormalShow() const; // lastname, firstname format
};

#endif
