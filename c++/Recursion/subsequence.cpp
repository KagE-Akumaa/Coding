#include <bits/stdc++.h>
#define int long long int
using namespace std;
void subset(vector<int>& res, vector<vector<int>>& ans, vector<int> temp,
            int i) {
  if (i >= res.size()) {
    ans.push_back(temp);
    return;
  }

  subset(res, ans, temp, i + 1);
  temp.push_back(res[i]);
  subset(res, ans, temp, i + 1);
}
bool compare(vector<int>& a, vector<int>& b) { return a.size() < b.size(); }
void find(vector<int>& res) {
  vector<vector<int>> ans;
  vector<int> temp;

  subset(res, ans, temp, 0);
  // sort(ans.begin(), ans.end(), compare);
  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
}
void solve() {
  int n;
  cin >> n;
  vector<int> res(n);
  for (int& i : res) cin >> i;

  find(res);
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}