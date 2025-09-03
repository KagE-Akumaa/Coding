#include <bits/stdc++.h>
#define int long long int
using namespace std;
int sumN(int n) {
  if (n == 0) return 0;
  return n + sumN(n - 1);
}
void solve() {
  int n;
  cin >> n;

  cout << sumN(n) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}