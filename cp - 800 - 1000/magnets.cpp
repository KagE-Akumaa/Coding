#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<string>s(n);
    for(int i = 0; i<n; i++){
        cin >> s[i];
    }
    int c = 1;
    for(int i = 1; i<n; i++){
        if(s[i-1]!=s[i])
            c++;
    }
    cout << c;
    return 0;
}
    