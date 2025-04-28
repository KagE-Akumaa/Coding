#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    if(n%4 == 0 || n%7 == 0){
        cout << "YES\n";
        return 0;
    }
    int arr[5] = {47,447,477,744,777};
    for(int i = 0; i<5; i++){
        if(n%arr[i] == 0){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";

    return 0;
}
    