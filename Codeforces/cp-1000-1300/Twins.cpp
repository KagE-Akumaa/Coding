#include <bits/stdc++.h>
using namespace std;
int resSum(vector<int>&res, int idx){
    int sum = 0;
    for(int i = idx; i<res.size(); i++)
        sum+= res[i];
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n; cin >> n;
    vector<int> res(n);
    for(int i = 0; i<n; i++)
        cin >> res[i];

    sort(res.begin(), res.end(), greater<int>());
    int c = 0, sum = 0;
    // for(int i = 0; i<n; i++){
    //     sum+= res[i];
    //     c++;
    //     int rsum = resSum(res, i+1);
    //     //cout << rsum << " ";
    //     if(sum > rsum){
    //         cout << c;
    //         return 0;
    //     }
    // }
    int tsum = accumulate(res.begin(), res.end(), 0);
    for(int i = 0; i<n; i++){
        sum+= res[i];
        c++;
        int rsum = tsum - sum;
        if(sum > rsum){
            cout << c;
            return 0;
        }
    }

    return 0;
}
    