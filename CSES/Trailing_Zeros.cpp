#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  int n;
  cin >> n;
  int c = 0;
  while (n) {
    n = n / 5;
    c += n;
  }
  cout << c << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  //  cin >> t;
  while (t--) solve();
  return 0;
}