#include <bits/stdc++.h>
using namespace std;

char getChar(const string& s) { return s[0]; }

void solve() {
  string a, b, c;
  cin >> a >> b >> c;
  cout << getChar(a) << getChar(b) << getChar(c) << '\n';
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();

  return 0;
}
