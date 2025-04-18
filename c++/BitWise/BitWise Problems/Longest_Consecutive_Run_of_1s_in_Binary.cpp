/*Longest Consecutive Run of 1s in Binary
Given a non-negative integer n, return the length of the longest consecutive run of 1s in its binary representation.

Constraints

0 ≤ n < 2 ^ 31

Example:

Input

n = 156
Output

3
Explanation

156 is 10011100 in binary and there's a run of length 3.*/

#include <bits/stdc++.h>
using namespace std;
int solve(int n)
{
     int c = 0, mc = 0;
     while(n > 0)
     {
          if(n & 1){
               c++;
          }
          else 
               c = 0;
          mc = max(c, mc);
          n = n >> 1;
     }
     return mc;
}
int main(){
     int n;
     cin >>n;
     cout << solve(n) << endl;
}