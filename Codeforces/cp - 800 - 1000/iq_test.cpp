#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<int> res(n);
    for(int i = 0; i<n; i++){
        cin >> res[i];
    }
    // int co = 0, ce = 0;
    // for(int i = 0; i<n; i++){
    //     if(res[i]&1)
    //         co++;
    //     else
    //         ce++;
    // }
    // if(co < ce){
    //     for(int i = 0; i<n; i++){
    //         if(res[i]&1){
    //             cout << i+1 << '\n';
    //             return 0;
    //         }
    //     }
    // }
    // else{
    //     for(int i = 0; i<n; i++){
    //         if(res[i]%2==0){
    //             cout << i+1 << '\n';
    //             return 0;
    //         }
    //     }
    // }
    vector<int> even, odd;
    for(int i = 0; i<n; i++){
        if(res[i]&1){
            odd.push_back(i+1);
        }
        else
            even.push_back(i+1);
        if(odd.size() > 1 && even.size() > 0)
            break;
        if(even.size() > 1 && odd.size() > 0)
            break;
    }
    cout << (odd.size()==1? odd[0]: even[0]);

    return 0;
}
    