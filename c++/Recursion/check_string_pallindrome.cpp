#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool checkPall(string &s, int l, int r) {
  if (s.empty()) return true;

  if (l >= r) return true;

  if (s[l] != s[r]) return false;

  return checkPall(s, l + 1, r - 1);
}
void solve() {
  string s;
  cin >> s;

  if (checkPall(s, 0, s.size() - 1))
    cout << "TRUE";
  else
    cout << "false";
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}