#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  int w1, w2, x, y, m;
  cin >> w1 >> w2 >> x >> y >> m;
  int minW = x * m;
  int maxW = y * m;

  if (w2 - w1 >= minW && w2 - w1 <= maxW) {
    cout << "1\n";
    return;
  }
  cout << "0" << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}