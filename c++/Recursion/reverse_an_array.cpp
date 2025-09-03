#include <bits/stdc++.h>
#define int long long int
using namespace std;
void Recursive_Reverse(vector<int>& res, int l, int r) {
  if (l >= r) return;

  swap(res[l], res[r]);
  Recursive_Reverse(res, l + 1, r - 1);
}
void solve() {
  int n;
  cin >> n;
  vector<int> res(n);
  for (int& i : res) cin >> i;

  Recursive_Reverse(res, 0, res.size() - 1);

  for (int i : res) cout << i << " ";
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}