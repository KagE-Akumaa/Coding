#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  int k;
  cin >> k;
  if (k & 1)
    cout << "YES\n";
  else
    cout << "NO\n";
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}