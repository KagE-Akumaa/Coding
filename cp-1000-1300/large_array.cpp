#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n, k;
    ll x;
    cin >> n >> k >> x;
    
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<ll> prefix(2 * n + 1, 0);
    for (int i = 0; i < 2 * n; i++) {
        prefix[i + 1] = prefix[i] + a[i % n];
    }
    
    ll total_sum = prefix[n];
    ll count = 0;
    
    for (int l = 0; l < n * k; l++) {
        int start_block = l / n;
        int start_idx = l % n;
        
        if (total_sum * (k - start_block) < x) continue;
        
        int low = l, high = min(n * k, l + n * (k - start_block)), res = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            ll sum = (mid / n - start_block) * total_sum + prefix[mid % n] - prefix[start_idx];
            if (sum >= x) {
                res = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        if (res != -1) {
            count += (n * k - res);
        }
    }
    
    cout << count << "\n";
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
