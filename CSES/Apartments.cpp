#include <bits/stdc++.h>

#define int long long int
using namespace std;

bool BS(vector<int> res, int k) {
  int l = 0, r = res.size() - 1;

  while (l <= r) {
    int m = (l + r) / 2;
    if (res[m] == k)
      return true;
    else if (res[m] > k) {
      r = m - 1;
    } else
      l = m + 1;
  }
  return false;
}
void solve() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> applicant(n);
  vector<int> appart(m);
  for (int &i : applicant) cin >> i;
  for (int &i : appart) cin >> i;

  sort(appart.begin(), appart.end());

  int c = 0;

  for (int i : applicant) {
    if (BS(appart, i - k) || BS(appart, i + k) || BS(appart, i)) {
      // count ++ and remove the i from appart
      c++;
      appart.erase(remove(appart.begin(), appart.end(), i), appart.end());
    }
  }

  cout << c << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}