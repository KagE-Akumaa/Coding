#include <bits/stdc++.h>
#define int long long int
using namespace std;
int fastPower(int a, int b) {
  if (b == 0) return 1;

  int sub = fastPower(a, b / 2);
  int subSquare = sub * sub;

  if (b & 1) {
    return a * subSquare;
  }
  return subSquare;
}
void solve() {
  int a, b;
  cin >> a >> b;

  cout << fastPower(a, b) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}