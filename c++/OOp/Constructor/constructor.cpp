#include <iostream>
using namespace std;
class Test {
  string name;
  int acc;
  int balance;

 public:
 // Default constructor once creatd the compiler won't create it for you
  Test() { cout << "Constructor is called" << endl; }
  // parameterized constructor or constructor overloading
  Test(const string &name, const int acc, const int balance) {
    this->name = name;
    this->acc = acc;
    this->balance = balance;
  }
  //Copy constructor the object should be passed by reference or it will create copies and then call again for the copy constructor 
  // Once copy constructor is made the compiler won't make one for you
  Test(Test &t) {
    name = t.name;
    acc = t.acc;
    balance = t.balance;
  }

  void Display() {
    cout << name << " " << acc << " " << balance << " " << endl;
  }
};
int main() {
  Test t("Mukul", 001, 1000);
  // copy the value of object t into b;
  Test b(t);
  t.Display();
  b.Display();
}