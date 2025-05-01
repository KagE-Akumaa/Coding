#include <bits/stdc++.h>
#define int long long int
using namespace std;
int mySqrt(int n) {
  if (n == 0 || n == 1) return n;
  double ans = 0, l = 1, r = n;
  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (mid * mid == n) {
      return mid;
    } else if (mid * mid > n)
      r = mid - 1;
    else
      l = mid + 1;
  }
  return r;
}
void solve() {
  int n;
  cin >> n;
  cout << mySqrt(n) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}