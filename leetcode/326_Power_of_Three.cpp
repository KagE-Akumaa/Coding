#include <bits/stdc++.h>
#define int long long int
using namespace std;

bool isPowerOfThree(int n) {
  if (n <= 0) return false;

  int p = 0;
  for (int i = 0; i <= n; i++) {
    p = pow(3, i);
    cout << p << " ";
    if (p == n) return true;
  }
  return false;
}
void solve() {
  int n;
 // cin >> n;
 int v = round(log(243) / log(3));
 int p = pow(3, v);
     cout << v << endl;
     cout <<  log(243)/log(3) << endl;
  //cout << isPowerOfThree(n) << endl;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}