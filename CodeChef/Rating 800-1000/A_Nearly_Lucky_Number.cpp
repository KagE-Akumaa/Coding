#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    // problem logic here
    string s;
    cin >> s;

    int count = 0;

    for (char ch : s) {
        if ((ch - '0' == 4) || (ch - '0' == 7))
            count++;
    }

    if (count == 4 || count == 7) {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    // cin >> t; // comment if only one test case
    while (t--) solve();
    return 0;
}