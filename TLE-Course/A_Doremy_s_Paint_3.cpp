#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        if (n == 2) {
            cout << "Yes\n";
            continue;
        }

        unordered_map<int,int> freq;
        for (int x : a) freq[x]++;

        if (freq.size() == 1) {
            cout << "Yes\n";
        } else if (freq.size() == 2) {
            auto it = freq.begin();
            int cnt1 = it->second; ++it;
            int cnt2 = it->second;
            int need1 = (n + 1) / 2; // ceil(n/2)
            int need2 = n / 2;       // floor(n/2)
            // check if one of frequencies equals ceil(n/2)
            if (cnt1 == need1 && cnt2 == need2) cout << "Yes\n";
            else if (cnt2 == need1 && cnt1 == need2) cout << "Yes\n";
            else cout << "No\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
