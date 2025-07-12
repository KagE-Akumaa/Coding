#include <bits/stdc++.h>
#define int long long int
using namespace std;
int strStr(string haystack, string needle) {
    string s = "";
    int n = needle.size();
    int c = 0, idx = -1;
    for (int i = 0; i < haystack.size(); i++) {
        if (c > n) {
            c = 0;
            s = "";
        }
        if (s == needle) {
            idx = s[1];
            return i;
        }
        s = s + haystack[i];
        c++;
    }
    return idx;
}
void solve() {
    string haystack, needle;
    cin >> haystack >> needle;

    cout << strStr(haystack, needle) << endl;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}
