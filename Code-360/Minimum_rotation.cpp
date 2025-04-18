/*Problem statement
You’re given a string 'S' of length 'N'. Your task is to find the minimum number of rotations to get the same string 'S'.

NOTE :
The string only consists of lowercase English alphabets.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= T <= 100
1 <= N <= 10 ^ 4

Time Limit: 1 sec

The string 'S' only contains lowercase English characters.     

Where 'T' denotes the number of test cases and 'N' denotes the length of string 'S'. 
Sample Input 1 :
1
5
ninja*/

#include <bits/stdc++.h>
using namespace std;
int minimumRotations(int n, string s)
{
     string str = s;
     int c = 1;
     for(int i =1; i<=n; i++)
     {
          rotate(str.begin(), str.begin()+1, str.end());
          if(str == s)
               return c;
          c++;
     }
     return n;
}
void solve()
{
     int n;
     string s;
     cin >> n >> s;

     cout << minimumRotations(n, s) << '\n';
}
int main()
{
     int t;
     cin >> t;
     while(t--)
          solve();
}