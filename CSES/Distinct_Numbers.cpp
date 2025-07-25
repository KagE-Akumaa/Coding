#include <bits/stdc++.h>
#define int long long int
using namespace std;
int distinct(vector<int> res) {
  set<int> s(res.begin(), res.end());

  return s.size();
}
void solve() {
  int n;
  cin >> n;
  vector<int> res(n);

  for (int &I : res) cin >> I;

  cout << distinct(res) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}