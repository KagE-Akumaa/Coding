#include <bits/stdc++.h>
#define int long long int
using namespace std;
void perm(vector<int>& nums, vector<vector<int>>& ans, int idx)

{
  if (idx == nums.size()) {
    ans.push_back(nums);
    return;
  }

  for (int i = idx; i < nums.size(); i++) {
    swap(nums[idx], nums[i]);
    perm(nums, ans, idx + 1);
    swap(nums[idx], nums[i]);
  }
}
vector<vector<int>> permutation(vector<int>& nums) {
  vector<vector<int>> ans;

  perm(nums, ans, 0);

  return ans;
}
void solve() {
  int n;
  cin >> n;
  vector<int> nums(n);
  for (int& i : nums) cin >> i;

  vector<vector<int>> perm = permutation(nums);

  for (int i = 0; i < perm.size(); i++) {
    for (int j = 0; j < perm[i].size(); j++) {
      cout << perm[i][j] << " ";
    }
    cout << endl;
  }
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  //  cin >> t;
  while (t--) solve();
  return 0;
}