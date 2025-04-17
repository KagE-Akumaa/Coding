#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int a[n][2];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<2; j++)
            cin >> a[i][j];
    }
    int c = 0;
    for(int i = 0; i<n; i++){
        for(int j = 1; j<2; j++){
            if(abs(a[i][j-1] - a[i][j]) >=2)
                c++;
        }
    }
    cout << c << '\n';

    return 0;
}
    