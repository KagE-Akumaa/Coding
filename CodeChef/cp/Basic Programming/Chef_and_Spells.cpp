#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  int sum = max({a + b, b + c, a + c});
  cout << sum << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}