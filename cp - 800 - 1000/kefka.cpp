#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    if(n==1){
        cout << n;
        return 0;
    }
    vector<int> res(n);
    for(int i = 0; i<n; i++){
        cin >> res[i];
    }
    int c = 1, mc = 0;
    for(int i = 1; i<n; i++){
        if(res[i-1] <=res[i]){
            c++;
        }
        else
            c = 1;
        mc = max(mc,c);
    }
    cout << mc;

    return 0;
}
    