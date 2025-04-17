#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y, a;
    cin >> x >> y >> a;

    // Compute full cycles (each cycle contains both x and y)
    long long fullCycles = a / (x + y);
    long long totalDepth = fullCycles * (x + y);

    // If adding x exceeds a, Little B wins ("NO"), otherwise Little K wins ("YES")
    cout << (totalDepth + x > a ? "NO\n" : "YES\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
    