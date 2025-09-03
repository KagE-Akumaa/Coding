#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool find(vector<int>& arr) {
  sort(arr.begin(), arr.end());
  bool check = false;
  for (int i = 1; i < arr.size(); i++) {
    if (arr[i - 1] == arr[i]) {
      check = true;
      break;
    }
  }
  return check;
}
void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);

  for (int& i : arr) cin >> i;

  if (find(arr)) {
    cout << "YES" << endl;
    return;
  }
  cout << "NO" << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}