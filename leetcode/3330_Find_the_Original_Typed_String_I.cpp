#include <bits/stdc++.h>
#define int long long int
using namespace std;
int possibleStringCount(string word) {
  int c = word.size();

  for (int i = 1; i < word.size(); i++) {
    if (word[i] != word[i - 1]) c--;
  }
  return c;
}
void solve() {
  string s;
  cin >> s;
  cout << possibleStringCount(s) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}