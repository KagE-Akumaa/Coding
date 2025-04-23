// subtract 2 big strings
#include <bits/stdc++.h>
#define int long long int
using namespace std;
// to convert char to int use - '0'
// to convert int to char use + '0'
string subTract(string a, string b) {
  string ans = "";
  // we need the bigger string
  if (a == b) return "0";
  if (a.size() < b.size()) {
    swap(a, b);
  }
  reverse(a.begin(), a.end());
  reverse(b.begin(), b.end());

  string res = "";
  int borrow = 0;

  for (int i = 0; i < b.length(); i++) {
    int d1 = a[i] - '0';
    int d2 = b[i] - '0';

    int sub = d1 - d2 - borrow;

    if (sub < 0) {
      sub += 10;
      borrow = 1;
    } else
      borrow = 0;

    res.push_back(sub + '0');
  }

  for (int i = b.length(); i < a.length(); i++) {
    int d2 = a[i] - '0';
    int sub = d2 - borrow;
    if (sub < 0) {
      sub += 10;
      borrow = 1;
    } else
      borrow = 0;

    res.push_back(sub + '0');
  }
  // remove trailing zero
  while (res.size() > 1 && res.back() == '0') {
    res.pop_back();
  }
  reverse(res.begin(), res.end());
  return res;
}
void solve() {
  string a, b;
  cin >> a >> b;
  string sub = subTract(a, b);
  cout << sub << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}