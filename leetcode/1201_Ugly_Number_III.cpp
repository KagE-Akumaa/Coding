#include <bits/stdc++.h>
#define int long long int
using namespace std;
int nthUglyNumber(int n, int a, int b, int c) {
  int count = 0;
  int i = 1;
  while (true) {
    if (a % i == 0) }
}
void solve() {
  int n, a, b, c;
  cin >> n >> a >> b >> c;

  cout << nthUglyNumber(n, a, b, c) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}
