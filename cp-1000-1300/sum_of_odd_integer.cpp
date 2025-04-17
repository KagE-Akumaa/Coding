#include <bits/stdc++.h>

#define int long long int
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    if(k*k > n || n%2!=k%2)
        cout << "NO\n";
    else
        cout << "YES\n";
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();   

    return 0;
}