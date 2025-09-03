#include <bits/stdc++.h>
#define int long long int
using namespace std;
int maximum69Number(int num) {
  string s = to_string(num);
  for (char &c : s) {
    if (c == '6') {
      c = '9';
      break;  // only flip the first one
    }
  }
  return stoi(s);
}
void solve() {
  int n;
  cin >> n;

  cout << maximum69Number(n) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  //  cin >> t;
  while (t--) solve();
  return 0;
}