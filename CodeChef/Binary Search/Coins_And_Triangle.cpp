#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool checkCoin(int num, int n) {
  int sum = num * (num + 1) / 2;
  if (sum <= n) return true;
  return false;
}
void solve() {
  int n;
  cin >> n;
  int l = 1, r = n, ans = 0;
  while (l <= r) {
    int mid = (r + l) / 2;
    if (checkCoin(mid, n)) {
      ans = mid;
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }
  cout << ans << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}