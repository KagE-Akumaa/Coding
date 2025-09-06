#include <bits/stdc++.h>
#define int long long
using namespace std;
// a - 97 - 122
// A - 65 - 90
void solve() {
    // problem logic here
    string s;
    cin >> s;

    int up = 0, lo = 0;

    for (char ch : s) {
        if (ch >= 97 && ch <= 122) {
            lo++;
        } else
            up++;
    }

    if (lo >= up) {
        // all lower case
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
        cout << s << endl;
    } else {
        for (int i = 0; i < s.size(); i++) {
            s[i] = toupper(s[i]);
        }
        cout << s << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    // cin >> t;  // comment if only one test case
    while (t--) solve();
    return 0;
}