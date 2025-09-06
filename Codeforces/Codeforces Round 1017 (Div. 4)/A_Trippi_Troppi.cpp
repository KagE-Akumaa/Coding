#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    // problem logic here
    string a, b, c;
    cin >> a >> b >> c;

    string s;
    s.push_back(a[0]);
    s.push_back(b[0]);
    s.push_back(c[0]);

    cout << s << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;  // comment if only one test case
    while (t--) solve();
    return 0;
}