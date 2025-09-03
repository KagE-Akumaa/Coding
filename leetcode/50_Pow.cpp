#include <bits/stdc++.h>
#define int long long int
using namespace std;
double power(double x, int n) {
  if (n == 0) return 1;
  double sub = power(x, n / 2);

  double subsq = sub * sub;

  if (n & 1) {
    return x * subsq;
  } else
    return subsq;
}
double myPow(double x, int n) {
  if (n == 0) return 1;

  if (n < 0) {
    x = 1 / x;
  }

  return power(x, n);
}
void solve() {
  double x;
  int n;
  cin >> x >> n;

  cout << myPow(x, n);
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}