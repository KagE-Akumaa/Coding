// Given a sorted array which can have repeated elements and an element k we
// need to find the frequency of a given element eg .. 0 1 1 1 2 2 2 3 4 4 5 10

#include <bits/stdc++.h>
#define int long long int
using namespace std;
int binarySearchF(vector<int> res, int k) {
  int l = 0, r = res.size() - 1;
  int ans = 0;
  while (l <= r) {
    int mid = (r + l) / 2;
    if (res[mid] == k) {
      ans = mid;
      r = mid - 1;

    } else if (res[mid] > k)
      r = mid - 1;
    else
      l = mid + 1;
  }
  return ans;
}
int binarySearchL(vector<int> res, int k) {
  int l = 0, r = res.size() - 1;
  int ans = 0;
  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (res[mid] == k) {
      ans = mid;
      l = mid + 1;

    } else if (res[mid] > k)
      r = mid - 1;
    else
      l = mid + 1;
  }
  return ans;
}
void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> res(n);
  for (auto &a : res) cin >> a;

  int foccu = binarySearchF(res, k);
  int last = binarySearchL(res, k);

  cout << last - foccu + 1 << endl;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}