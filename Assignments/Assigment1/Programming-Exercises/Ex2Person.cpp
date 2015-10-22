#include "Ex2Person.h"
#include <string>


Person::Person(const string & ln, const char * fn /* = "Heyyou" */) {
  lname = ln;
  strcpy(fname, fn);
};

void Person::Show() const {
  cout << *fname << " " << lname << endl;
};

void Person::FormalShow() const {
  cout << lname << ", " << *fname << endl;
};
