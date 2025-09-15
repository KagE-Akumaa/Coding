#include <bits/stdc++.h>
#define int long long
using namespace std;
/*--------------------- Prefix Sum 1D ---------------------*/
void gen_prefix_1D(vector<int>& pre, const vector<int>& v) {
    int n = v.size();
    pre[0] = v[0];
    for (int i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + v[i];
    }
}
int prefix_solver_1D(const vector<int>& pre, int l, int r) {
    if (l == 0)
        return pre[r];
    return pre[r] - pre[l - 1];
}

/*--------------------- Prefix Sum 2D ---------------------*/
void gen_prefix_2D(vector<vector<int>>& pre, const vector<vector<int>>& v) {
    int n = v.size(), m = v[0].size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            pre[i][j] = v[i][j];
            if (i > 0)
                pre[i][j] += pre[i - 1][j];
            if (j > 0)
                pre[i][j] += pre[i][j - 1];
            if (i > 0 && j > 0)
                pre[i][j] -= pre[i - 1][j - 1];
        }
    }
}
int prefix_solver_2D(const vector<vector<int>>& pre, int l1, int r1, int l2, int r2) {
    int ans = pre[l2][r2];
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
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (i == 0 && s[i] == '9')
            continue;
        else if (s[i] - '0' > 4) {
            int val = 9 - (s[i] - '0');

            s[i] = val + '0';
        }
    }
    cout << s << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    // cin >> t;  // comment if only one test case
    while (t--) solve();
    return 0;
}