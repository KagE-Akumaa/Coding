#include <bits/stdc++.h>
#define int long long int
using namespace std;
pair<int, int> expand(string& s, int l, int r) {
    while ((l >= 0 && r < s.size()) && (s[l] == s[r])) {
        l--;
        r++;
    }
    // after the last iteration where the loop will fail l and r will still
    // be decremented and incremented to revert the changes we do l + 1 and
    // r - 1
    return {l + 1, r - 1};
}
string longestPalindrome(string s) {
    if (s.empty())
        return "";

    int mlen = -1;
    int startIdx = 0, endIdx = 0;
    for (int i = 0; i < s.size(); i++) {
        auto p1 = expand(s, i, i);
        // no need for endIdx but we need p1.second to calculate the length
        int l1 = p1.second - p1.first + 1;

        if (l1 > mlen) {
            startIdx = p1.first;
            endIdx = p1.second;
            mlen = l1;
        }

        // for even length there will be 2 middle elements
        auto p2 = expand(s, i, i + 1);
        int l2 = p2.second - p2.first + 1;
        if (l2 > mlen) {
            startIdx = p2.first;
            endIdx = p2.second;
            mlen = l2;
        }
    }
    // substr function takes 2 arguments the start index of the string and
    // the count of how many characters it need to form the desired
    // substring
    return s.substr(startIdx, mlen);
}
void solve() {
    string s;
    cin >> s;

    string p = longestPalindrome(s);

    cout << p << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) solve();
    return 0;
}