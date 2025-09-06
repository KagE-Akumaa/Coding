#include <bits/stdc++.h>
#define int long long
using namespace std;
void gen_prefix_2D(vector<vector<int>>& pre, vector<vector<int>>& v) {
    int n = v.size();
    int m = v[0].size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // pre[i][j] = v[i][j] + pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1];
            pre[i][j] = v[i][j];
            if (i > 0) {
                pre[i][j] += pre[i - 1][j];
            }
            if (j > 0) {
                pre[i][j] += pre[i][j - 1];
            }
            if (i > 0 && j > 0) {
                pre[i][j] -= pre[i - 1][j - 1];
            }
        }
    }
}
int prefix_solver_2D(vector<vector<int>>& pre, int l1, int r1, int l2, int r2) {
    int ans = 0;
    // ans = pre[l2][r2] - pre[l1-1][r2] - pre[l2][r1-1] + pre[l1-1][r1-1];
    ans = pre[l2][r2];

    if (l1 > 0)
        ans -= pre[l1 - 1][r2];
    if (r1 > 0)
        ans -= pre[l2][r1 - 1];
    if (l1 > 0 && r1 > 0)
        ans += pre[l1 - 1][r1 - 1];

    return ans;
}
void solve() {
    // problem logic here
    int n, q;
    cin >> n >> q;
    vector<vector<int>> v(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char ch;
            cin >> ch;

            if (ch == '.') {
                v[i][j] = 0;
            } else
                v[i][j] = 1;
        }
    }
    vector<vector<int>> p(n, vector<int>(n));

    gen_prefix_2D(p, v);

    while (q--) {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;

        cout << prefix_solver_2D(p, l1 - 1, r1 - 1, l2 - 1, r2 - 1) << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    //  cin >> t;  // comment if only one test case
    while (t--) solve();
    return 0;
}