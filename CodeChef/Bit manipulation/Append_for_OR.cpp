#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  int n, y;
  cin >> n >> y;
  int arr[n];
  int val = 0;
  for (int i = 0; i < n; i++) {
    cin >> i[arr];
    val = val | arr[i];
  }
  int x = val | y;
  if (x != y) {
    cout << "-1" << '\n';
    return;
  }
  // x = y & ~(val);
  x = y ^ val;
  cout << (x) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}