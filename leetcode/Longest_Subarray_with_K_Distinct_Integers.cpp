/*
Given:
An array of integers nums[] and an integer k

Task:
Find the length of the longest subarray that contains at most k distinct integers.
🧪 Example:
Input:
nums = [1, 2, 1, 2, 3], k = 2
Output: 4
Explanation: The subarray [1, 2, 1, 2] has 2 distinct numbers.
*/

#include <bits/stdc++.h>
#define int long long int
using namespace std;

int lenghtSubarrayDistinct(vector<int> res, int n, int k) {
    unordered_map<int, int> mpp;
    int r = 0, l = 0, mlen = 0;

    while (r < n) {
        mpp[res[r]]++;
        while (mpp.size() > k) {
            mpp[res[l]]--;
            if (mpp[res[l]] == 0)
                mpp.erase(res[l]);
            l++;
        }
        mlen = max(mlen, r - l + 1);
        r++;
    }
    return mlen;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> res(n);
    for (int& i : res) cin >> i;

    cout << lenghtSubarrayDistinct(res, n, k) << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}