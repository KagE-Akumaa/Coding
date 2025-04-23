#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  int n;
  cin >> n;
  int b = 1;
  // 2 to n
  // even xor odd and

  for (int i = 2; i <= n; i++) {
    if (i & 1) {
      b = b & i;
    } else
      b = b ^ i;
  }
  cout << b << '\n';
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}