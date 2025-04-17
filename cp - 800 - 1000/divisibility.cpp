#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while(t--){
        long long a, b,c=0;
        cin >> a >> b;
        if(a%b ==  0){
            cout << "0\n";
        }
        else{
        c = (a/b) + 1;
        long long d = b*c - a;
        cout << d << '\n';
    }

    }

    return 0;
}
    