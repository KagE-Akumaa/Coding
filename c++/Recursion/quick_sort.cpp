#include <bits/stdc++.h>
#define int long long int
using namespace std;
int parti(vector<int>& arr, int s, int e) {
  int randomPivot = s + rand() % (e - s + 1);
  swap(arr[randomPivot], arr[e]);  // move random pivot to the end

  int pos = s;
  for (int i = s; i <= e; i++) {
    if (arr[i] <= arr[e]) {
      swap(arr[i], arr[pos]);
      pos++;
    }
  }
  return pos - 1;
}
void quickSort(vector<int>& res, int s, int e) {
  if (s >= e) return;

  int pivot = parti(res, s, e);

  quickSort(res, s, pivot - 1);
  quickSort(res, pivot + 1, e);
}
void solve() {
  int n;
  cin >> n;

  vector<int> res(n);

  for (int& i : res) cin >> i;

  quickSort(res, 0, res.size() - 1);

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