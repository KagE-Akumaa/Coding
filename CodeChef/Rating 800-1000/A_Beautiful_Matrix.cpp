#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    // problem logic here
    vector<vector<int>> mat(5, vector<int>(5));
    pair<int, int> a;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == 1) {
                a.first = i ;
                a.second = j ;
            }
        }
    }
    cout << abs(2 - a.first) + abs(2 - a.second) << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    // cin >> t; // comment if only one test case
    while (t--) solve();
    return 0;
}