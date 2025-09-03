#include <bits/stdc++.h>

#define int long long int
using namespace std;
void merge(vector<int>& res, int s, int e) {
  vector<int> temp;

  int mid = s + (e - s) / 2;
  int l = s, r = mid + 1;

  while (l <= mid && r <= e) {
    if (res[l] <= res[r]) {
      temp.push_back(res[l]);
      l++;
    } else {
      temp.push_back(res[r]);
      r++;
    }
  }

  while (l <= mid) {
    temp.push_back(res[l]);
    l++;
  }
  while (r <= e) {
    temp.push_back(res[r]);
    r++;
  }

  for (int i = 0; i < temp.size(); i++) {
    res[s++] = temp[i];
  }
}
void merge_sort(vector<int>& res, int s, int e) {
  if (s == e) return;
  int mid = s + (e - s) / 2;

  merge_sort(res, s, mid);
  merge_sort(res, mid + 1, e);

  merge(res, s, e);
}
void solve() {
  int n;
  cin >> n;

  vector<int> res(n);

  for (int& i : res) cin >> i;

  merge_sort(res, 0, res.size() - 1);

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