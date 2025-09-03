#include <bits/stdc++.h>
#define int long long int
using namespace std;
void BubbleSort(vector<int>& res) {
  for (int i = 0; i < res.size(); i++) {
    for (int j = 0; j < res.size() - i - 1; j++) {
      if (res[j] > res[j + 1]) swap(res[j], res[j + 1]);
    }
  }
}
void RecursiveBubbleSort(vector<int>& res, int i) {
  if (i == res.size() - 1) return;

  for (int j = 0; j < res.size() - i - 1; j++)
    if (res[j] > res[j + 1]) swap(res[j], res[j + 1]);

  RecursiveBubbleSort(res, i + 1);
}
void solve() {
  int n;
  cin >> n;
  vector<int> res(n);

  for (int& i : res) cin >> i;

  // BubbleSort(res);
  RecursiveBubbleSort(res, 0);
  for (int i : res) cout << i << " ";
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  //  cin >> t;
  while (t--) solve();
  return 0;
}