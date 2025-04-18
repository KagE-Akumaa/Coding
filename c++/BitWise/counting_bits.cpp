//count the set bits in a number
#include <iostream>
using namespace std;
int countBit(int n)
{
     int c = 0;
     while(n > 0){
          if(n&1)
               c++;
          n = n >> 1;
     }
     return c;
}
int countBit_hack(int n){
     int c = 0;

     while(n > 0){
          // remove the set bit and we increament the count
          // it will remove till no bit is set 
          n = n & (n-1);
          c++;
     }
     return c;
}
int main()
{
     int n;
     cin >> n;
     cout << countBit(n) << endl;
     cout << countBit_hack(n) << endl;
}