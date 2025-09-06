#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    // problem logic here 
    int n, x;
    cin >> n >> x;

  
    int t = n*x;
    int d = (n/3)*x;

    cout << t - d << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t; // comment if only one test case
    while (t--) solve();
    return 0;
}