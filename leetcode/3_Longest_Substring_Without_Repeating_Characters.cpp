#include <bits/stdc++.h>
#define int long long int
using namespace std;
int lengthOfLongestSubstring(string s) {
    int l = 0, r = 0, mlen = 0;
    unordered_map<char, int> mpp;

    while (r < s.length()) {
        mpp[s[r]]++;
        while (mpp[s[r]] > 1) {
            mpp[s[l]]--;
            l++;
        }

        mlen = max(mlen, r - l + 1);
        r++;
    }
    return mlen;
}
void solve() {
    string s;
    cin >> s;

    cout << lengthOfLongestSubstring(s) << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}