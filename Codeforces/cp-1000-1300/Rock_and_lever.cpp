#include <bits/stdc++.h>
#define int long long int
using namespace std;
        
void solve(){
    int n;
    cin >> n;
    vector<int> res(n);
    for(int i = 0; i<n; i++)
        cin>> res[i];
    int c = 0;
    int l = 0, r = n -1;
    sort(res.begin(), res.end());
    while(l < r)
        if((res[l]&res[r])>=(res[l]^res[r])){
            c++;
        }
        l++;
        r--;
    }
    cout << c << '\n';
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}