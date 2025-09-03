#include <bits/stdc++.h>
#define int long long int
using namespace std;
int climbStairs(int n) {
  if (n == 1 || n == 2) return n;
  vector<int> f(n + 1, 0);

  f[1] = 1;
  f[2] = 2;
  for (int i = 3; i <= n; i++) {
    f[i] = f[i - 1] + f[i - 2];
  }
  return f[n];
}
void solve() {
  int n;
  cin >> n;

  cout << climbStairs(n) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}