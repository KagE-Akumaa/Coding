#include <bits/stdc++.h>

#include <vector>
#define int long long int
using namespace std;

// int LastOccurrence(vector<int>& res, int k, int i, int& val) {
//   if (i >= res.size()) return val;

//   if (res[i] == k) val = i;

//   return LastOccurrence(res, k, i + 1, val);
int LastOccurrence(vector<int>& res, int k, int i) {
  if (i < 0) return -1;
  if (res[i] == k) return i;
  return LastOccurrence(res, k, i - 1);
}

void solve() {
  int n, k;
  cin >> n >> k;

  vector<int> res(n);
  for (int& i : res) cin >> i;
  int val = -1;
  cout << LastOccurrence(res, k, res.size() - 1) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}