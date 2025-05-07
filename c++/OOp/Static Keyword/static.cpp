#include <iostream>
using namespace std;
class Test {
  string name;
  int acc;
  int balance;
  // static variable is only made once and is shared by all instances of a class
  static int total_customer;
 public:
 
 
  Test(const string &name, const int acc, const int balance) {
    this->name = name;
    this->acc = acc;
    this->balance = balance;
    total_customer++;
  }
  
  void Display() {
    cout << name << " " << acc << " " << balance << " " << total_customer << endl;
  }
  void DisplayTotal()
  {
     cout << total_customer << endl;
  }
};
// to initialize the default value of static variable this syntax is followed

int Test::total_customer = 0;
int main() {
  Test t("Mukul", 001, 1000);
  // copy the value of object t into b;
  Test b("Anish", 1202, 10000);
  Test a("Anish", 1202, 10000);
  Test d("Anish", 1202, 10000);
  Test n("Anish", 1202, 10000);
  t.Display();
  b.DisplayTotal();
}