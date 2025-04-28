
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m; 
    cin >> n >> m;
    vector<int> res(m);
    for(auto &x: res)
        cin >> x;
    sort(res.begin(), res.end());
    int mdiff= INT_MAX;
    int r = 0, l = 0;
    while(r < m){
        if(r-l+1 > n){
            l++;
        }
        if(r-l+1 == n){
            int d = res[r] - res[l];
            mdiff = min(d,mdiff);
        }
        r++;
    }
    cout << mdiff;

    return 0;
}
    