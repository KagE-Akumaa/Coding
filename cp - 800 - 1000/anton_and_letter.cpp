#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;
    getline(cin, str);
    unordered_set<char> s;
    for(char ch: str){
        if((int)ch>=97 && (int)ch<=122){
            s.insert(ch);
        }
    }
    cout << s.size();

    // for(auto&it:s)
    //     cout << it << " ";

    return 0;
}
    