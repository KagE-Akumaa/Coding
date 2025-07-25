#include <bits/stdc++.h>
#define int long long int
using namespace std;
int longestConsecutive(vector<int> &nums) {
  unordered_set<int> s(nums.begin(), nums.end());
  int mc = 0;
  for (int i : s) {
    if (s.find(i - 1) == s.end()) {
      int current = i;
      int c = 0;

      while (s.find(current + 1) != s.end()) {
        current++;
        c++;
      }

      mc = max(mc, c);
    }
  }
  return mc;
}
void solve() {
  int n;
  cin >> n;
  vector<int> res(n);
  for (int &i : res) cin >> i;

  cout << longestConsecutive(res) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}