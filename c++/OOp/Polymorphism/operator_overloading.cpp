#include <iostream>
using namespace std;

class Complex{
     int real, imag;
public:
     Complex(){
          real = 0, imag = 0;
     }
     Complex(int real, int imag) : real(real), imag(imag) {}

     void display()
     {
          cout << real << " + i" << imag << endl;
     }
     Complex operator +(Complex &c)
     {
          Complex ans;
          ans.real = real + c.real;
          ans.imag = imag + c.imag;

          return ans;
     }
};

int main()
{
     Complex a(3, 4);
     Complex b(4, 6);
     Complex c = a + b;
     c.display();
}