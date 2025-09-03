#include <bits/stdc++.h>
#define int long long int
using namespace std;
int fact(int n) {
  if (n == 0 || n == 1) return 1;
  return n * fact(n - 1);
}
void solve() {
  int n;
  cin >> n;

  cout << fact(n) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}