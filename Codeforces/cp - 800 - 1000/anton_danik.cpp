#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    string str;
    cin >> str;
    int ac = 0, dc = 0;
    for(char ch: str){
        if(ch == 'A')
            ac++;
        else
            dc++;
    }
    if(ac > dc)
        cout << "Anton" <<'\n';
    else if(dc > ac)
        cout << "Danik" << '\n';
    else
        cout << "Friendship" << '\n';

    return 0;
}
    