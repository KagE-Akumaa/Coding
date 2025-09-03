#include <bits/stdc++.h>
#define int long long int
using namespace std;

// string tran(string& s) {
//   string str;
//   for (char ch : str) {
//     if (ch == '0') {
//       str += "01";
//     } else {
//       str += "10";
//     }
//   }
//   return str;
// }
// string fun(string s, int n) {
//   if (n == 1) {
//     s.push_back('0');
//     return s;
//   }

//   return tran(fun(s, n - 1));
// }
int getIdx(string& s, int k) { return s[k] - '0'; }
string tran(string s) {
  string str;
  for (char ch : s) {
    if (ch == '0')
      str += "01";

    else
      str += "10";
  }
  cout << str << endl;
  return str;
}
int kthGrammar(int n, int k) {
  vector<string> s(n + 1);
  s[1] = "0";
  s[2] = "01";

  for (int i = 3; i <= n; i++) {
    s[i] = tran(s[i - 1]);
  }

  return getIdx(s[n], k - 1);
}
void solve() {
  int n, k;
  cin >> n >> k;

  int ans = kthGrammar(n, k);
  cout << ans;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}