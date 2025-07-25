#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  int x;
  cin >> x;

  if (x < 10) {
    cout << x << endl;
    return;
  }
  int m = INT_MAX;

  while (x) {
    int rem = x % 10;
    m = min(m, rem);
    x = x / 10;
  }

  cout << m << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}