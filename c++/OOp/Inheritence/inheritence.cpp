#include <iostream>
// Single level inheritence
using namespace std;

class Human {
    string name;
    int age;

   public:
    Human() { cout << "Human constructor\n"; }
    void setName(const string& name) {
        if (name == "") {
            cout << "Invalid name!" << endl;
            return;
        }
        this->name = name;
    }
    void setAge(int age) {
        if (age < 17 || age > 30) {
            cout << "Age limit not met\n";
            return;
        }
        this->age = age;
    }
    void display_Name_age() { cout << "Name is : " << name << " age is " << age << endl; }
};
class Student : public Human {
    int roll_no, fees;

   public:
    // First the constructor of parent class is called and then derived class
    Student() { cout << "Student constuctor\n"; }

    void setRollno(int roll_no) {
        if (roll_no <= 0) {
            cout << "Enter a valid roll-no\n";
            return;
        }
        this->roll_no = roll_no;
    }
    void setFees(int fees) {
        if (fees < 0) {
            cout << "Invalid!" << endl;
            return;
        }
        this->fees = fees;
    }
    // if display is defined in derived class it would call that if not it will call the function in
    // parent class
    void display() {
        cout << "Student roll-no is " << roll_no << endl;
        cout << "Fees is: " << fees << endl;
    }
};

int main() {
    Student s;
    s.setName("Mukul");
    s.setAge(25);
    s.setRollno(18);
    s.setFees(5000);
    s.display_Name_age();
    s.display();
}