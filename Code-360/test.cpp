#include <bits/stdc++.h>
#define int long long int
using namespace std;
int goodPair(vector<int> arr, int x) {
  int c = 0;

  for (int i = 0; i < arr.size(); i++) {
    for (int j = i + 1; j < arr.size(); j++) {
      if ((arr[i] & arr[j]) == x) c++;
    }
  }
  return c;
}
void solve() {
  int n, x;
  cin >> n >> x;
  vector<int> res(n);
  for (int &i : res) cin >> i;

  cout << goodPair(res, x) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}