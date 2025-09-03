#include <bits/stdc++.h>

#include <complex>
#define int long long int
using namespace std;
int powerOf(int n) {
  if (n == 0) return 1;
  return 2 * powerOf(n - 1);
}
void solve() {
  int n;
  cin >> n;

  cout << powerOf(n) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}