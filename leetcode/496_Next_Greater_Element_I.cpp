#include <bits/stdc++.h>
#define int long long int
using namespace std;
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
  stack<int> s;
  int n = nums2.size();
  vector<int> res(n, -1);
  unordered_map<int, int> mpp;
  for (int i = 0; i < n; i++) {
    while (!s.empty() && nums2[s.top()] < nums2[i]) {
      res[s.top()] = nums2[i];

      s.pop();
    }

    s.push(i);
  }

  for (int i = 0; i < n; i++) {
    mpp[nums2[i]] = res[i];
  }
  vector<int> ans;
  for (int i = 0; i < nums1.size(); i++) {
    ans.push_back(mpp[nums1[i]]);
  }

  return ans;
}
void solve() {
  int m, n;
  cin >> m >> n;

  vector<int> nums1(m), nums2(n);

  for (int& i : nums1) cin >> i;

  for (int& i : nums2) cin >> i;

  vector<int> ans = nextGreaterElement(nums1, nums2);

  for (int i : ans) cout << i << " ";
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}