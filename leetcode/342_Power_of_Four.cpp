#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool isPowerOfFour(int n) {
  if (n <= 0) return false;
  return (n & (n - 1)) == 0 && n % 3 == 1;
}
void solve() {
  int n;
  cin >> n;

  if (isPowerOfFour(n))
    cout << "TRUE";
  else
    cout << "false";
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}