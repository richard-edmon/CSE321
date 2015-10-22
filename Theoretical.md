# CSE.321.ass.1
### Name: Richard Edmon Abdelshahid Moines
### Bench Number: 33749

1. A class is an extendable program code to create objects

2. A

3. A class is used to create and define the behaviour of objects depending on Abstraction

4. Class function members are used to protect the data members of the same class

5. ```
class bankAccount {
 private:
  string name;
  string number;
  double balance;

 public:
  bankAccount();
  bankAccount(const string & nam, const string & num, double bal);
  void show();
  void deposit(double n);
  void withdraw(double n);
  ~bankAccount();
};

```

6. Constructors are called to initiate an object, while destructors are called to delete the object

7. bankAccount();

8. Default constructor is implicitely created by the compiler to set a default value for the object (initialization)

9. A

10. this is a pointer of member functions and used to refer to relative objects
    *this is used to return reference to the calling object
