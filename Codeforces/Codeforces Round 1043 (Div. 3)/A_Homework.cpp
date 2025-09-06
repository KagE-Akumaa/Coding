#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  int n;
  cin >> n;
  string a, b, c;
  cin >> a;
  int m;
  cin >> m;
  cin >> b;
  cin >> c;

  for (int i = 0; i < m; i++) {
    if (c[i] == 'D') {
      a.push_back(b[i]);
    } else {
      a.insert(a.begin(), b[i]);
    }
  }
  cout << a << endl;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}