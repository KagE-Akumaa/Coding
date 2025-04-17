#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> res(n);
    for(int i = 0; i<n; i++)
        cin >> res[i];
    bool flag = true;
    int ds = 0, ss = 0;
    int l = 0,  r = res.size()-1;
    while(l <= r){
        if(flag){
            if(res[r] > res[l]){
                ds += res[r];
                r--;
            }
            else{
                ds += res[l];
                l++;
            }
            flag = false;
        }
        else{
            if(res[r] > res[l]){
                ss += res[r];
                r--;
            }
            else{
                ss += res[l];
                l++;
            }
            flag = true;
        }
    }
    cout << ds << " " << ss;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }

    return 0;
}