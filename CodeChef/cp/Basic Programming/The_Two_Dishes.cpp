#include <bits/stdc++.h>

#define int long long int
using namespace std;
pair<int, int> TwoDishes(int n, int s) {
  int l = 0, r = n;
  while (l < r) {
    int sum = l + r;
    if (sum == s) {
      return {l, r};
    }
    if (sum > s)
      r--;
    else
      l++;
  }
  return {};
}
void solve() {
  int n, s;
  cin >> n >> s;

  pair<int, int> p = TwoDishes(n, s);

  cout << abs(p.first - p.second) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}