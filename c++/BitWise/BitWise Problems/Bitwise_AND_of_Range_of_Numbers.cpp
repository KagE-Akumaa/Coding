/*
Bitwise AND of Range of Numbers
Given two integers left and right that represent the range [left, right], return the bitwise AND of all numbers in this range, inclusive.

Constraints:

0 <= left <= right <= 2^31 - 1

Example 1:

Input: left = 5, right = 7
 
Output: 4
*/
#include <bits/stdc++.h>
#define int long long int
using namespace std;
int rangeBitwiseAnd(int left, int right)
{
   /*
   time complexity O(right)
   int ans = left;
     for(int i = left; i<= right; i++)
     {
          ans = ans&i;
     }
     return ans;*/

     // faster method
     int shift = 0;
     while(left < right){
          left = left >> 1;
          right = right >> 1;
          shift++;
     }
     return left << shift;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
     int left, right;
     cin >> left >> right;

    cout << rangeBitwiseAnd(left, right) << '\n';
    return 0;
}