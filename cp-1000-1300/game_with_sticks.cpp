#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n,m;
    cin >> n >> m;
    if((min(n,m))&1)
        cout << "Akshat";
    else
        cout << "Malvika";

    return 0;
}
    
