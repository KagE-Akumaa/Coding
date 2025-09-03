#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  vector<int> a({1, 2, 3});
  vector<int> b({1, 2, 3});

  if (a == b)
    cout << "Success";
  else
    cout << "Not-Success";
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}