#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  int n;
  cin >> n;
  int sum = n * (n + 1) / 2;
  if (sum & 1) {
    cout << n - 1 << endl;
    return;
  }
  cout << n << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}