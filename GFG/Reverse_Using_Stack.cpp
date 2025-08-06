#include <bits/stdc++.h>
#define int long long int
using namespace std;
string rev(const string& str) {
  // code here
  stack<char> st;

  for (char ch : str) st.push(ch);

  string rev = "";
  // str.clear();

  while (!st.empty()) {
    rev.push_back(st.top());

    st.pop();
  }

  return rev;
}
void solve() {
  string s;
  cin >> s;

  cout << rev(s) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}