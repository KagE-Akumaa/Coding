#include <bits/stdc++.h>
#define int long long int
using namespace std;
vector<int> nextLargerElement(vector<int>& arr) {
  int n = arr.size();

  vector<int> ans(n, -1);

  stack<int> s;

  for (int i = 0; i < n; i++) {
    while (!s.empty() && arr[s.top()] < arr[i]) {
      ans[s.top()] = arr[i];
      s.pop();
    }
    s.push(i);
  }

  return ans;
}
void solve() {
  int n;
  cin >> n;

  vector<int> res(n);
  for (int& i : res) cin >> i;

  vector<int> ans = nextLargerElement(res);

  for (int i : ans) cout << i << " ";
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}