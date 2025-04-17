#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> res(n);
    for(int i = 0; i<n; i++)
        cin >> res[i];
    int cneg = 0, cpos = 0;
    for(int i: res){
        if(i == -1)
            cneg++;
        else
            cpos++;
    }
    int op = 0;
    while(cpos < cneg || cneg%2==1){
        op++;
        cpos++;
        cneg--;
    }
    cout << op <<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while(t--){
        solve();
    }

    return 0;
}
    