#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  float s, a, b, c;
  cin >> s >> a >> b >> c;

  float change = s + (s * c) / 100;
  // cout << change << " ";
  if (change >= a && change <= b) {
    cout << "Yes\n";
    return;
  }
  cout << "No\n";
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}