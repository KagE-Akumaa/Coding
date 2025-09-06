#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    // problem logic here 
    int n,k;
    cin >> n >> k;
    while(k--)
    {
     int rem = n % 10;
     if(rem >0)
     {
          n = n -1;
     }
     else
     {
          n = n/10;
     }
    }
    cout << n << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
   // cin >> t; // comment if only one test case
    while (t--) solve();
    return 0;
}