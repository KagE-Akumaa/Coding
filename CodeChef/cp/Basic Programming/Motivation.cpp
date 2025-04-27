#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  int n, x;
  cin >> n >> x;
  vector<pair<int, int>> res(n);
  for (auto& i : res) cin >> i.first >> i.second;

  pair<int, int> ans;
  int imdb = 0;
  for (auto& i : res) {
    if (i.first <= x) {
      ans = i;
      imdb = max(imdb, ans.second);
    }
  }
  cout << imdb << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}