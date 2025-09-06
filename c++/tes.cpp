#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    // problem logic here
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int& i : arr) cin >> i;

    for (int i : arr) cout << i + 1 << endl;
}

int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("/home/akumaa/input.txt", "r", stdin);
    freopen("/home/akumaa/output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
   // cin >> t;  // comment if only one test case
    while (t--) solve();
    return 0;
}