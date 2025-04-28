#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, h; cin >> n >> h;
    vector<int> a(n);
    for(int i = 0; i<n; i++)
        cin >> a[i];
    int w = 0;
    for(int i = 0; i<n; i++){
        if(a[i]>h){
            w = w + 2;
        }
        else
            w++;
    }
    cout << w << endl;

    return 0;
}
    