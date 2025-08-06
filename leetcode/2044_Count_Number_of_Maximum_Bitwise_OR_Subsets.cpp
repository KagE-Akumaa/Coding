#include <bits/stdc++.h>
#define int long long int
using namespace std;

int countMaxOrSubsets(vector<int>& arr) {
  int n = arr.size();
  int maxOr = 0;
  int count = 0;

  // Calculate the maximum possible OR
  for (int num : arr) {
    maxOr |= num;
  }

  // Loop over all non-empty subsets
  for (int mask = 1; mask < (1 << n); ++mask) {
    int currOr = 0;
    for (int i = 0; i < n; ++i) {
      if (mask & (1 << i)) {
        currOr |= arr[i];
      }
    }
    if (currOr == maxOr) count++;
  }

  return count;
}
void solve() {
  int n;
  cin >> n;

  vector<int> res(n);
  for (int& i : res) cin >> i;

  cout << countMaxOrSubsets(res) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}