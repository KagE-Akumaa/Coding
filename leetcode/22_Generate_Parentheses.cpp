#include <bits/stdc++.h>
#define int long long int
using namespace std;
void gen(vector<string>& str, string& s, int l, int r) {
  if (r < l) return;
  if (l == 0) {
    // add the right brackets
    s.append(r, ')');

    str.push_back(s);
    // backtracking step need to remove the right brackets now
    s.erase(s.size() - r, r);
    return;
  }
  // inserting
  s.push_back('(');
  gen(str, s, l - 1, r);
  // reverting the changes backtracking step (make tree to understand better)
  s.pop_back();
  // inserting now right bracket
  s.push_back(')');
  gen(str, s, l, r - 1);
  // reverting the changes backtracking step (make tree to understand better)
  s.pop_back();
}
vector<string> generateParenthesis(int n) {
  vector<string> str;
  string s;

  int l = n, r = n;

  gen(str, s, l, r);
  return str;
}
void solve() {
  int n;
  cin >> n;
  vector<string> str = generateParenthesis(n);

  for (auto s : str) cout << s << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  //  cin >> t;
  while (t--) solve();
  return 0;
}