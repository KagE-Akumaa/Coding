#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    // problem logic here
    string a, b;
    cin >> a >> b;

    string s;

    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[i])
            s.push_back('G');
        else
            s.push_back('B');
    }

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