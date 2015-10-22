#include <iostream>
#include "Ex6Move.h"
using namespace std;

int main() {
  Move mo;
  cout << "initial move object: " << endl;
  mo.showmove();
  cout << "reset x=1,y=2: " << endl;
  mo.reset(1,2);
  mo.showmove();
  cout << "add x by 3, and y by 4: " << end;;
  Move mo2(3,4);
  mo = mo.add(mo2);
  mo.showmove();
  return 0;
}
