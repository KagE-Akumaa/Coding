#include <bits/stdc++.h>
#define int long long int
using namespace std;

int sumOf(int n) {
  if (n == 1) return 1;
  return n * n + sumOf(n - 1);
}
void solve() {
  int n;
  cin >> n;

  cout << sumOf(n) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  //  cin >> t;
  while (t--) solve();
  return 0;
}