#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector < vector<int> grid(n, vector<int>(n));
  set<int> s;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> grid[i][j];
      s.insert(grid[i][j]);
    }
  }

  int ele = -1;
  for (int i = 1; i < 2 * n; i++) {
    if (s.find(i) == s.end()) {
      ele = i;
      break;
    }
  }
  unordered_set<int> ans;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> grid[i][j];
      ans.insert(grid[i][j]);
    }
  }

  for (int i : ans) cout << i << " ";
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}