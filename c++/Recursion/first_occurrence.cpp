#include <bits/stdc++.h>
#define int long long int
using namespace std;

int firstOccurence(vector<int> &res, int k, int i) {
  if (i >= res.size()) return -1;
  if (res[i] == k) return i;

  return firstOccurence(res, k, i + 1);
}
void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> res(n);

  for (int &i : res) cin >> i;

  cout << firstOccurence(res, k, 0) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}