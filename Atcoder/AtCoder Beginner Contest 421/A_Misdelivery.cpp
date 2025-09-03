#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  int n, x;
  string y;
  cin >> n;
  vector<string> s(n);

  for (auto &i : s) cin >> i;

  cin >> x >> y;

  int idx = x - 1;

  if (s[idx] == y) {
    cout << "Yes" << endl;
    return;
  }
  cout << "No" << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}