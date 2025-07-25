#include <bits/stdc++.h>

#include <numeric>
#include <vector>
#define int long long int
using namespace std;
int checkSum(vector<int>& a) { return accumulate(a.begin(), a.end(), 0); }
int changeSum(vector<int>& a, int x) {
  int c = 0;
  sort(a.begin(), a.end());
  for (int i = 0; i < a.size(); i++) {
    for (int j = 0; j < a.size(); j++) {
      int og = a[i];
      a[i] = a[i] - a[j];
      if (checkSum(a) == x) {
        return c;
      }
      a[i] = og;
      c++;
    }
  }
  return -1;
}
void solve() {
  int n, x;
  cin >> n >> x;
  vector<int> res(n);
  for (int& i : res) cin >> i;

  cout << changeSum(res, x) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}