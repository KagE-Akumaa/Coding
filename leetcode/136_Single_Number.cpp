#include <bits/stdc++.h>
#define int long long int
using namespace std;
int singleNumber(vector<int>& res) {
    int ans = 0;
    for (int i : res) ans ^= i;
    return ans;
}
void solve() {
    int n;
    cin >> n;
    vector<int> res(n);
    for (int& i : res) cin >> i;
    cout << singleNumber(res) << endl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    while (t--) solve();
    return 0;
}
