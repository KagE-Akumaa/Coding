#include <iostream>
#include <vector>
using namespace std;

class Animal {
   public:
    /*
    // Simple virtual function
    virtual void sound()
    {
         cout << "Huhuh" << endl;
    }
     */
    // abstract class
    virtual void sound() = 0;  // can't create object of an abstract class
};

class Dog : public Animal {
   public:
    void sound() { cout << "Bark" << endl; }
};
class Cat : public Animal {
   public:
    void sound() { cout << "Meow" << endl; }
};
class Horse : public Animal {
   public:
    void sound() { cout << "Hihi" << endl; }
};
class Lion : public Animal {
   public:
    void sound() { cout << "Roar" << endl; }
};

int main() {
    /* Animal *p;

      p = new Dog();
      // printing huhu because its decide on compile time as the p pointer is pointing to an animal
      data type so it goes into that class and decide which function it should call it sees sound it
      call the sound function from the animal class
      // if we use virtual keyword it send the message that compiler should not decide it on the
      compile time leave it for the run time
      // at run time the its decided which function to call based on what type of object is being
      created p->sound();
      */

     // pointer variable p will hold the address to the animal object/class
     //Animal *p;
     // created a array of animal pointer to hold the address of the objects
     vector<Animal*> ani;
     // create new object or user defined data in heap
     ani.push_back(new Dog());
     ani.push_back(new Cat());
     ani.push_back(new Horse());
     ani.push_back(new Lion());

     // for loop to iterate through the array
     for(auto i : ani)
     {
          // as every element is just a pointer which holds the address to the oject/data type 
        i->sound();
     }

}