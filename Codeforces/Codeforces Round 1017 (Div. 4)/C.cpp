#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<vector<int>> grid(n, vector<int>(n));
  set<int> s;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> grid[i][j];
      s.insert(grid[i][j]);
    }
  }

  int ele = -1;
  for (int i = 1; i <= 2 * n; i++) {
    if (s.find(i) == s.end()) {
      ele = i;
      break;
    }
  }

  unordered_set<int> ans;
  vector<int> arr;
  arr.push_back(ele);
  ans.insert(ele);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (ans.find(grid[i][j]) == ans.end()) {
        ans.insert(grid[i][j]);
        arr.push_back(grid[i][j]);
      }
    }
  }

  for (int i : arr) cout << i << " ";
  cout << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}
