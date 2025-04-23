// find a*b with mod c range 10^15
#include <bits/stdc++.h>
#define int long long int
using namespace std;
int multiply(int a, int b, int c)
{
     int res = 0;
     while(b)
     {
          if(b&1)
               res = res + a, res = res % c;
          a = a + a;
          a = a%c;
          b = b >> 1;
     }
     return res;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int a, b, c;
     cin >> a >> b;
    cout << multiply(a, b, c=1e9+7);
    return 0;
}