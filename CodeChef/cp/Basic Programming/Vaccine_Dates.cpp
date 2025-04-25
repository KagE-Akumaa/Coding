#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  int d, l, r;
  cin >> d >> l >> r;
  if (d < l)
    cout << "Too Early" << endl;
  else if (d > r)
    cout << "Too Late" << endl;
  else
    cout << "Take second dose now" << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}