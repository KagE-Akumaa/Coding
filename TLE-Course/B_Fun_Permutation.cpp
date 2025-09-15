#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];

    // Step 1: bucket numbers 1..n by their mod 3 class
    vector<int> bucket0, bucket1, bucket2;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) bucket0.push_back(i);
        else if (i % 3 == 1) bucket1.push_back(i);
        else bucket2.push_back(i);
    }

    vector<int> q(n);

    // Step 2: for each p[i], assign a complement number from correct bucket
    for (int i = 0; i < n; i++) {
        int r = p[i] % 3;
        if (r == 0) { // need q[i] % 3 == 0
            q[i] = bucket0.back();
            bucket0.pop_back();
        } else if (r == 1) { // need q[i] % 3 == 2
            q[i] = bucket2.back();
            bucket2.pop_back();
        } else { // r == 2, need q[i] % 3 == 1
            q[i] = bucket1.back();
            bucket1.pop_back();
        }
    }

    // Step 3: print the permutation q
    for (int i = 0; i < n; i++) cout << q[i] << " ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
