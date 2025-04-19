#include <bits/stdc++.h>
#define int long long int
using namespace std;
int findSetBit(int n)
{
     if(n == 0 || (n&(n-1))!=0)
     return -1;
 int pos = 0;
 int c = 0;
 int temp = n;
 while(n>0)
 {
     if(c > 1)
         return -1;
     if(n&1)
         c++;
     pos++;
     n = n >> 1;
 }
 cout << temp << " ";
 return pos;
}
void solve(){
     int n;
     cin >> n;
     cout << findSetBit(n) << '\n';
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin>> t;
    while(t--){
     solve();
    }
    return 0;
}