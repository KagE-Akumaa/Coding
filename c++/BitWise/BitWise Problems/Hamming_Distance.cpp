/*Hamming Distance
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers x and y, return the Hamming distance between them.

Constraints:

0 <= x, y <= 2^31 - 1



Example :

Input: x = 1, y = 4
Output: 2
Explanation:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑
The above arrows point to positions where the corresponding bits are different.*/

#include <bits/stdc++.h>
using namespace std;
int hammingDistance(int x, int y){
     int c = 0;

     // checking bits by bits instead we can xor the two numbers and count the set bits
     // while(x > 0 ||  y > 0)
     // {
     //      int xb = x&1;
     //      int yb = y&1;
     //      if(xb != yb)
     //           c++;
     //    //  cout << xb << " " << yb << " ";
     //      x = x >> 1;
     //      y = y >> 1;
     // }
     int z = x ^ y;
     while(z > 0)
     {
          z = z & (z-1);
          c++;

     }
     return c;
}
int main(){
     int x, y;
     cin >> x >> y;

     cout << hammingDistance(x, y) << '\n';
}