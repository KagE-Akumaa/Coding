#include <bits/stdc++.h>
#define int long long int
using namespace std;
int hamming(int n) {
    int c = 0;
    while (n) {
        n = n & (n - 1);
        c++;
    }
    return c;
}
vector<int> countBits(int n) {
    vector<int> v;

    for (int i = 0; i <= n; i++) {
        v.push_back(hamming(i));
    }
    return v;
}
void solve() {
    int n;
    cin >> n;

    vector<int> ans;

    ans = countBits(n);
    for (int i : ans) cout << i << " ";
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    while (t--) solve();
    return 0;
}
