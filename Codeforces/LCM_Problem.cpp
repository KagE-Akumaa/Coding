#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  int l, r;
  cin >> l >> r;

  int x = l, y = 2 * l;

  if (y <= r) {
    cout << x << " " << y << endl;
    return;
  }
  cout << "-1 -1" << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}