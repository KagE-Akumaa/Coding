#include <bits/stdc++.h>

#include <vector>
#define int long long int
using namespace std;

int findLucky(vector<int>& arr) {
  vector<int> res(502, 0);
  for (int i : arr) res[i]++;

  int mlen = -1;

  // for (int i : res) cout << i << " ";
  for (int i = 1; i < res.size(); i++) {
    if (res[i] == i) {
      mlen = max(mlen, res[i]);
    }
  }

  return mlen;
}
void solve() {
  int n;
  cin >> n;
  vector<int> res(n);
  for (int& I : res) cin >> I;

  cout << findLucky(res) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}