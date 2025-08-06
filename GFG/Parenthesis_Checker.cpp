#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool isBalanced(string& k) {
  // code here
  stack<char> s;

  for (char ch : k) {
    if (ch == '(' || ch == '{' || ch == '[')
      s.push(ch);

    else {
      if (!s.empty()) {
        char t = s.top();
        if ((ch == ')' && t != '(') || (ch == '}' && t != '{') ||
            (ch == ']' && t != '['))
          return false;
        else
          s.pop();
      } else
        return false;
    }
  }

  if (s.empty()) return true;
  return false;
}
void solve() {
  string s;
  cin >> s;

  if (isBalanced(s)) {
    cout << "TRUE" << endl;
    return;
  }
  cout << "FALSE" << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}