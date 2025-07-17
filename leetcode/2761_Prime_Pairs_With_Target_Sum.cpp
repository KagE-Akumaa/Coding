#include <bits/stdc++.h>
#define int long long int
using namespace std;
const int k = 1e6;
vector<bool> primes(k + 1, true);
bool alreadyDone = false;
void genPrimes() {
  if (alreadyDone) return;
  primes[1] = false;
  primes[0] = false;

  for (int i = 2; i <= k; i++) {
    if (primes[i] == true) {
      for (int j = i * i; j <= k; j += i) {
        primes[j] = false;
      }
    }
  }
  alreadyDone = true;
}
void genPair(vector<int> &a, vector<int> v, int n) {
  int r = v.size() - 1, l = 0;

  while (l < r) {
    int sum = v[l] + v[r];
    if (sum == n) {
      a.push_back(v[l]);
      a.push_back(v[r]);

      return;
    }
    if (sum < n) {
      l++;
    } else
      r--;
  }
}
vector<vector<int>> findPrimePairs(int n) {
  vector<int> v;
  vector<vector<int>> r;
  genPrimes();
  for (int i = 0; i <= n; i++) {
    if (primes[i] == true) v.push_back(i);
  }
  vector<int> a;
  for (int i : v) {
    if (2 * i == n) {
      a.push_back(i);
      a.push_back(i);
    }
  }

  genPair(a, v, n);
  for (int i = 0; i < a.size(); i += 2) {
    r.push_back({a[i], a[i + 1]});
  }

  sort(r.begin(), r.end());
  return r;
}
void solve() {
  int n;
  cin >> n;

  vector<vector<int>> ans = findPrimePairs(n);

  for (auto &row : ans) {
    for (auto &val : row) {
      cout << val << " ";
    }
    cout << endl;
  }
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}