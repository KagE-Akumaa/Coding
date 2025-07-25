#include <bits/stdc++.h>

#include <vector>
#define int long long int
using namespace std;

int maximumUniqueSubarray(vector<int>& nums) {
  int r = 0, l = 0;
  unordered_map<int, int> mpp;
  int sum = 0, msum = 0;

  while (r < nums.size()) {
    mpp[nums[r]]++;

    if (mpp[nums[r]] > 1) {
      while (mpp[nums[r]] != 1 && l < r) {
        sum = sum - nums[l];
        mpp[nums[l]]--;
        l++;
      }
    }

    if (mpp[nums[r]] == 1) {
      sum += nums[r];
      msum = max(msum, sum);
    }
    r++;
  }
  for (auto it : mpp) cout << it.first << endl;
  return msum;
}
void solve() {
  int n;
  cin >> n;
  vector<int> res(n);
  for (int& i : res) cin >> i;

  cout << maximumUniqueSubarray(res) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}