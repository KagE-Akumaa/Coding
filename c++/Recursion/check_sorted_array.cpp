
#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool checkSort(vector<int>& ans, int i) {
  if (ans.empty()) return true;
  if (i == ans.size() - 1) return true;
  if (ans[i] > ans[i + 1]) return false;

  return checkSort(ans, i + 1);
}
bool checkSorted(vector<int> ans) {
  if (ans.empty()) return true;
  return checkSort(ans, 0);
}
void solve() {
  int n;
  cin >> n;
  vector<int> res(n);
  for (int& i : res) cin >> i;

  if (checkSorted(res))
    cout << "TRUE";
  else
    cout << "FALSE";
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}