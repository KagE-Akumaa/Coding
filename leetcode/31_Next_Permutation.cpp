#include <bits/stdc++.h>
#define int long long int
using namespace std;
void nextPermutation(vector<int>& nums) {
  int i = nums.size() - 2;

  while (i >= 0 && nums[i] >= nums[i + 1]) i--;

  if (i < 0) {
    // means the array is a reversed array their won't be a next permutation so
    // return the reversed array

    reverse(nums.begin(), nums.end());
    return;
  }

  int j = nums.size() - 1;

  while (nums[j] <= nums[i]) j--;

  swap(nums[i], nums[j]);

  // we reverse the remaining array

  reverse(nums.begin() + i + 1, nums.end());
}
void solve() {
  int n;
  cin >> n;

  vector<int> nums(n);

  for (int& i : nums) cin >> i;
  nextPermutation(nums);

  for (int i : nums) cout << i << " ";
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}