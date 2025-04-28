#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, t;
  cin >> n >> t;
  vector<int> res(n);
  for (int &i : res) cin >> i;
  int r = 0, l = 0, sum = 0;
  int c = 0;
  while (r < n) {
    sum += res[r];
    while (sum > t) {
      sum -= res[l];
      l++;
    }
    c = max(c, r - l + 1);

    r++;
  }
  cout << c << endl;
  return 0;
}