# CSE.321.ass.1
### Name: Richard Edmon Abdelshahid Moines
### Bench Number: 33749

1. A class is an extendable program code to create objects

2. In a class, different Access Modifiers are used (Public, Private and Protected). A class can have multiple public, protected, or private labeled sections. A public member is accessible from anywhere outside the class but within a program. A private member variable or function cannot be accessed, or even viewed from outside the class. Only the class and neighbouring functions can access private members. A protected member variable or function is very similar to a private member but it provides one additional benefit that they can be accessed in child classes which are called derived classes

3. A class is used to create and define the behaviour of objects depending on Abstraction

4. Each instance of a class (object) will allocate memory to store it's own set of data. But all those objects share the same set of member functions.

5. You can find the class delclared below.
     ```
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
