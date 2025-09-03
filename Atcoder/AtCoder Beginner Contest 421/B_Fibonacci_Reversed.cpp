#include <bits/stdc++.h>

#include <string>
#define int long long int
using namespace std;

int fx(int val) {
  string str = to_string(val);
  reverse(str.begin(), str.end());

  int number = 0;
  for (int i = 0; i < str.size(); i++) {
    number = number * 10 + str[i] - '0';
  }

  return number;
}
void solve() {
  int x, y;
  cin >> x >> y;

  vector<int> f(11);

  f[1] = x;
  f[2] = y;

  for (int i = 3; i < 11; i++) {
    int val = f[i - 1] + f[i - 2];
    f[i] = fx(val);
  }

  // cout << fx(13) << endl;
  cout << f[10] << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}