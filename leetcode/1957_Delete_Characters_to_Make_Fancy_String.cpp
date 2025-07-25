#include <bits/stdc++.h>
#define int long long int
using namespace std;

string makeFancyString(string &s) {
  string res = "";
  int c = 0;
  for (int i = 2; i < s.size(); i++) {
    if (s[i] == s[i - 1] == s[i - 2]) {
      continue;
      c = 0;
    }
    if (c < 3) {
      res.push_back(s[i - 2]);
    }
  }

  return res;
}
void solve() {
  string s;
  cin >> s;

  cout << makeFancyString(s) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}