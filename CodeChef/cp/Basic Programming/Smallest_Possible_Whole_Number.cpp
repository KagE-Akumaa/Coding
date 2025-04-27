#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  if (n < k) {
    cout << n << endl;
    return;
  } else if (k == 0) {
    cout << n << endl;
    return;
  }
  cout << n % k << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}