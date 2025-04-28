#include <bits/stdc++.h>
#define int long long int
using namespace std;


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n; 
    cin >> n;
    string str;
    cin >> str;
    transform(str.begin(), str.end(),str.begin(), ::tolower);
    sort(str.begin(), str.end());
    char ch = 'a';
    for(char c: str){
        if(c == ch){
            ch++;
        }
    }
    if(ch > 'z')
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}