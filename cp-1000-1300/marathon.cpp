#include <bits/stdc++.h>
#define int long long int
using namespace std;
int n = 4;

void solve() {
  vector<int> res(n);
  for (int i = 0; i < n; i++) cin >> res[i];
  int a = res[0], b = res[1], c = res[2], d = res[3];
  sort(res.begin(), res.end(), greater<int>());
  // find the indx of a;
  int r = n - 1, l = 0;
  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (res[mid] == a) {
      cout << mid << endl;
      return;
    } else if (res[mid] < a)
      r = mid - 1;
    else
      l = mid + 1;
  }
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}