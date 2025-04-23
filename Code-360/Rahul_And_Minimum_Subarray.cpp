#include <bits/stdc++.h>

#include <climits>
#define int long long int
using namespace std;
int minSubArrayLen(vector<int> res, int k, int n) {
  int r = 0, l = 0, sum = 0;
  int mlen = INT_MAX;
  while (r < n) {
    sum += res[r];

    while (sum > k) {
      int len = r - l + 1;
      mlen = min(len, mlen);
      sum -= res[l];
      l++;
    }
    r++;
  }
  return mlen == INT_MAX ? 0 : mlen;
}
void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> res(n);
  for (int &I : res) cin >> I;
  cout << minSubArrayLen(res, k, n) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}