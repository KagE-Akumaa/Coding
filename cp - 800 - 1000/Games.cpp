#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int,int>> res(n);
    unordered_map<int, int> mpp;
    for(int i = 0; i<n; i++){
        cin >> res[i].first >> res[i].second;
        mpp[res[i].second]++;
    }

    // int c = 0;
    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<n; j++){
    //         if(res[i].first == res[j].second)
    //             c++;
    //     }
    // }
    
    int c = 0;
    for(int i = 0; i<n; i++){
        c+= mpp[res[i].first];
    }
    cout << c << '\n';

    return 0;
}
    