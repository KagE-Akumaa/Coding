#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    // problem logic here
    int a, b;
    cin >> a >> b;

    if (a == b) {
        cout << "Yes" << endl;
        return;
    }

    if ((b-a)%2 == 0) {
        cout << "Yes" << endl;
    } else
        cout << "No" << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;  // comment if only one test case
    while (t--) solve();
    return 0;
}