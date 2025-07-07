#include <bits/stdc++.h>

#include <functional>
#define int long long int
using namespace std;
vector<int> topKSumPairs(vector<int>& a, vector<int>& b, int k) {
  // code here
  sort(a.begin(), a.end(), greater<int>());
  sort(b.begin(), b.end(), greater<int>());

  vector<int> ans;
  for (int i = 0; i < k; i++) {
    for (int j = 0; j < k; j++) {
      ans.push_back(b[i] + a[j]);
    }
  }
  return ans;
}
void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  vector<int> b(n);
  for (int& I : a) cin >> I;
  for (int& I : b) cin >> I;

  vector<int> res = topKSumPairs(a, b, k);
  for (int i : res) cout << i << " ";
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}