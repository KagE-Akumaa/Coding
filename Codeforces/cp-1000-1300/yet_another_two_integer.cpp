#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve() {
  int a, b;
  cin >> a >> b;

  int diff = abs(a - b);
  cout << (diff + 9) / 10 << '\n';
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();

  return 0;
}