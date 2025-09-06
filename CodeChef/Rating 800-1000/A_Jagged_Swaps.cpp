#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    // problem logic here
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int& i : arr) cin >> i;

     if(arr[0] == 1)
     {
          cout << "YES" << endl;
          return;
     }
     cout << "NO" << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;  // comment if only one test case
    while (t--) solve();
    return 0;
}