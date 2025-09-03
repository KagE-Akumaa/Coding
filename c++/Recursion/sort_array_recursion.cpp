#include <bits/stdc++.h>
#define int long long int
using namespace std;
void RecSort(vector<int>& arr, int n, map<int, int>& mpp) {
  if (n < 0) {
    // cout << arr[n] << " ";

    return;
  }
  mpp[arr[n]]++;
  RecSort(arr, n - 1, mpp);
}
void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int& i : arr) cin >> i;
  map<int, int> mpp;
  RecSort(arr, n - 1, mpp);
  int k = 0;
  for (auto& p : mpp) {
    int val = p.first;
    int freq = p.second;
    while (freq--) arr[k++] = val;
  }
  for (int i : arr) cout << i << " ";
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}