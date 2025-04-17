#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str = "hello";
    string s;
    cin >> s;
    
    int i = 0;
    for(char ch: s){
        if(str[i]==ch){
            i++;
        }
        if(i == 5){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
    