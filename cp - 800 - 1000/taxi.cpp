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
    int sum = 0, c = 0;
    for(int i = 0; i<n; i++){
        sum+= res[i];
        if(sum >= 4){
            c++;
            sum = sum-4;
        }
    }
    if(sum >0)
        c = c + 1;
    cout << c << '\n';

    return 0;   
}
    