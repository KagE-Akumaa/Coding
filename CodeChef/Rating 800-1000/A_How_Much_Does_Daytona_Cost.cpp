#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    // problem logic here
    int n, k;
    cin >> n >> k;

    vector<int> arr;
    bool eleFound = false;
    for (int i = 0; i < n; i++) {
        int v = 0;
        cin >> v;
        arr.push_back(v);
        if (v == k) {
            eleFound = true;
        }
    }

    if (!eleFound) {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;  // comment if only one test case
    while (t--) solve();
    return 0;
}