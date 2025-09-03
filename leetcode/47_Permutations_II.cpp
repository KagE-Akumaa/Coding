#include <bits/stdc++.h>

#define int long long int

using namespace std;
bool nextPerm(vector<int>& nums) {
  int i = nums.size() - 2;

  while (i >= 0 && nums[i] >= nums[i + 1]) i--;

  if (i < 0) {
    return false;
  }
  int j = nums.size() - 1;
  while (nums[j] <= nums[i]) j--;

  swap(nums[j], nums[i]);

  reverse(nums.begin() + i + 1, nums.end());

  return true;
}
vector<vector<int>> permuteUnique(vector<int>& nums) {
  vector<vector<int>> ans;

  sort(nums.begin(), nums.end());

  do {
    ans.push_back(nums);
  } while (nextPerm(nums));

  return ans;
}
void solve() {
  int n;
  cin >> n;

  vector<int> nums(n);
  for (int& i : nums) cin >> i;

  vector<vector<int>> ans = permuteUnique(nums);

  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}