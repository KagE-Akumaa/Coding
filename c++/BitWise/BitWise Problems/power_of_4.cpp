/*Power of Four
Given an integer n, return true if it is a power of four. Otherwise, return false.

An integer n is a power of four, if there exists an integer x such that n == 4^x.

Constraints:

-2^31 <= n <= 2^31 - 1

Example 1:

Input: n = 16
Output: true
Example 2:

Input: n = 5
Output: false
Note: Could you solve it without loops/recursion? */

#include <iostream>
using namespace std;
bool isPowerOfFour(int n)
{
     if(n <= 0)
          return false;
     // should be a power of 2 and should have 1 at every even index
     //0x55555555 in binary is: 01010101 01010101 01010101 01010101

     //It has 1s at even positions (0-based indexing).
     if((n & n-1)==0 && (n&0x55555555))
     {
          return true;
     }
     return false;
}
int main()
{
     int n;
     cin >> n;

     cout <<( isPowerOfFour(n) ? "YES" : "NO") << '\n';
}