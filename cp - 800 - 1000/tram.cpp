#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    int a[n][2];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<2; j++)
            cin >> a[i][j];
    }

    bool first = true;
    int sum = 0, msum = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<2; j++){
            if(first){
                sum = sum + a[i][j];
                first = false;
            }
            else{
                sum = sum - a[i][j];
                if(sum < 0){
                    sum = 0;
                }
                first = true;

            }
        }
        msum = max(sum, msum);
    }
    cout << msum << '\n';

    return 0;
}
    