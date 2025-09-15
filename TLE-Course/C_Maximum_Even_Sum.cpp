#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;
    __int128 prod = (__int128)a * b; // to avoid overflow up to 1e36
    long long ans = -1;

    // Case 1: k = b
    long long sum1 = (long long)(prod + 1);
    if (sum1 % 2 == 0) ans = max(ans, sum1);

    // Case 2: k = 1
    long long sum2 = a + b;
    if (sum2 % 2 == 0) ans = max(ans, sum2);

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
