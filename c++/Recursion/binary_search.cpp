#include <bits/stdc++.h>
#define int long long int
using namespace std;

int bs(vector<int>& res, int l, int r, int k) {
  if (l > r) return -1;
  int m = (l + r) / 2;

  if (res[m] == k) return m;

  if (res[m] > k)
    r = m - 1;
  else
    l = m + 1;
  return bs(res, l, r, k);
}
void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> res(n);
  for (int& i : res) cin >> i;

  cout << bs(res, 0, res.size() - 1, k);
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}