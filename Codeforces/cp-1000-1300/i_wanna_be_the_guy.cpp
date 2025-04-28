#include <bits/stdc++.h>
#define int long long int
using namespace std;


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    unordered_map<int, int> mpp;
    int p;
    cin >> p;
    int x;
    for(int i = 0;i<p; i++){
        cin >> x;
        mpp[x]++;
    }
    int q;
    cin >> q;
    int y;
    for(int i = 0; i<q; i++){
        cin >> y;
        mpp[y++];
    }
    for(int i = 1; i<=n; i++){
        if(mpp.find(i)==mpp.end()){
            cout << "Oh, my keyboard!\n";
            return 0;
        }
    }
    cout << "I become the guy.\n";
    
    return 0;
}