#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int &i : arr) cin >> i;

  int k = 625;
  int sum = 0;
  for (int i : arr) sum += i ^ k;
  for (int i = 0; i < n; i++) {
    int setBit = __builtin_popcount(arr[i]);
    cout << arr[i] << " " << setBit << endl;
  }
  cout << sum << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}