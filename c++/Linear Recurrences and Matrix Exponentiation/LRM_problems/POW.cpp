/*
POW
For a base number X, the product of multiplying it Y times is called X to the Y-th power and represented as pow(X,Y). For example, we have pow(2,3)=2×2×2=8.

Given three integers A, B, and C, compare pow(A,C) and pow(B,C) to determine which is greater.

If pow(A,C)<pow(B,C), return <; if pow(A,C)>pow(B,C), return >; if pow(A,C)=pow(B,C), return = .

Constraints:

-10^9 <= A, B <= 10^9

1<= C <= 10^9

Example 1:

Input

A = 3,  B = 2 , C = 4
Output

">"
Explanation:

We have pow(3,4)=81 and pow(2,4)=16.

Example 2:

Input

A = -7,  B = 7 , C = 2
Output

"="
Explanation:

We have pow(−7,2)=49 and pow(7,2)=49.
*/
#include <bits/stdc++.h>
#define int long long int
using namespace std;
int power(int a, int n)
{
     int res = 1;
     while( n > 0){
          if(n&1)
               res = res*a;
          a = a * a;

          n = n >> 1;
     }
     return res;
}

string CheckPower(int a, int b, int c)
{
     // power (a, c)  and (b, c)
     int ac = power(a, c);
     int bc = power(b, c);

     if(ac < bc)
          return "<";
     else if(ac > bc)
          return ">";
     else 
          return "=";
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int a, b, c;
    cin >> a >> b >> c;

    cout << CheckPower(a, b, c) << endl;
     
    
    return 0;
}