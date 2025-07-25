#include <bits/stdc++.h>
#define int long long int
using namespace std;
/*
If the letter is a lowercase English letter append it to result.
A '*' removes the last character from result, if it exists.
A '#' duplicates the current result and appends it to itself.
A '%' reverses the current result.

Note: Ple maintain the integrity of your submissions.*/
string processStr(string s) {
  string res = "";
  for (char ch : s) {
    if (ch == '*' && !res.empty()) {
      res.pop_back();
    } else if (ch == '#') {
      string n = res;
      for (char ch : n) res.push_back(ch);
    } else if (ch == '%')
      reverse(res.begin(), res.end());

    else if (ch >= 97 && ch <= 122)
      res.push_back(ch);
  }
  cout << res << endl;
  return res;
}
void solve() {
  string s;
  cin >> s;

  string str = processStr(s);
  cout << str;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}