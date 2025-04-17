#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    unordered_map<string, int> mpp;

    for(int i = 0; i<n; i++){
        string str;
        cin >> str;

        if(mpp[str]==0){
            cout << "OK\n";
        }
        else {
            cout << str << mpp[str] << '\n';
        }
        mpp[str]++;
    }
    return 0;
}
    