/*

Given a binary array nums, return the maximum length of a contiguous subarray
with an equal number of 0 and 1.



Example 1:

Input: nums = [0,1]
Output: 2
Explanation: [0, 1] is the longest contiguous subarray with an equal number of 0
and 1.
*/

#include <bits/stdc++.h>
#define int long long int
using namespace std;

int findMaxLength(vector<int>& nums, int k) {
    for (int& i : nums) {
        if (i == 0)
            i = -1;
    }
    unordered_map<int, int> mpp;
    mpp[0] = -1;
    int sum = 0;
    int mlen = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (mpp.find(sum - k) != mpp.end()) {
            int len = i - mpp[sum - k];
            mlen = max(len, mlen);
        }
        if (mpp.find(sum) == mpp.end()) {
            mpp[sum] = i;
        }
    }
    return mlen;
}
void solve() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int& i : nums) cin >> i;

    cout << findMaxLength(nums, 0) << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}