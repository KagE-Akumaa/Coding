#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    // problem logic here 
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for(auto& i: v)
     cin >> i;

     vector<int> pre(n);
     pre[0] = v[0];
     for(int i = 1; i<n; i++)
          pre[i] = pre[i-1] + v[i];
     
     while(q--)
     {
          int l, r;
          cin >> l >> r;
          l = l-1; r = r-1;
          if(l == 0)
          {
               cout << pre[r] << endl;
          }
          else
          {
               cout << pre[r] - pre[l-1] << endl;
          }
     }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
  //  cin >> t; // comment if only one test case
    while (t--) solve();
    return 0;
}