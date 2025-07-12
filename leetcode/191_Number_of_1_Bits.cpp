#include <bits/stdc++.h>
#define int long long int
using namespace std;

int hammingWeight(int n) {
    int c = 0;
    while (n) {
        n = n & (n - 1);
        c++;
    }
    return c;
}

void solve() {
    int n;
    cin >> n;

    cout << hammingWeight(n) << endl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}
