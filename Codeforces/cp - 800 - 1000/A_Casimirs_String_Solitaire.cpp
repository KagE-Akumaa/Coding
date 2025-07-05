#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  string s;
  cin >> s;

  int ca = 0, cb = 0, cc = 0;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'A')
      ca++;
    else if (s[i] == 'B')
      cb++;
    else
      cc++;
  }
  if (cb == ca + cc) {
    cout << "YES" << endl;
    return;
  }
  cout << "NO" << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}