#include <bits/stdc++.h>

#include <climits>
#include <unordered_map>
#define int long long int
using namespace std;
int findLHS(vector<int>& nums) {
  unordered_map<int, int> mpp;
  for (int i : nums) mpp[i]++;

  int c = 0, mlen = 0;
  for (int i = 0; i < nums.size(); i++) {
    if (mpp.find(nums[i] + 1) != mpp.end()) {
      c = mpp[nums[i]] + mpp[nums[i] + 1];
    }
    mlen = max(mlen, c);
  }
  return mlen;
}
void solve() {
  int n;
  cin >> n;
  vector<int> res(n);
  for (int& i : res) cin >> i;

  cout << findLHS(res) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}