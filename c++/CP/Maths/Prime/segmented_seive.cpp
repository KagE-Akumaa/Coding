#include <bits/stdc++.h>
#define int long long int
using namespace std;
vector<int> prime;
const int k = 100000;

void seive(int k) {
  vector<bool> is_Prime(k + 1, true);
  is_Prime[0] = is_Prime[1] = false;

  for (int i = 2; i * i <= k; i++) {
    if (is_Prime[i]) {
      for (int j = i * i; j <= k; j += i) {
        is_Prime[j] = false;
      }
    }
  }
  prime.clear();
  for (int i = 2; i <= k; i++) {
    if (is_Prime[i]) prime.push_back(i);
  }
}
void segSeive(int l, int h) {
  int sq = sqrt(h);
  seive(sq);

  vector<bool> isPrime(h - l + 1, true);
  if (l == 1) isPrime[0] = false;

  for (auto i : prime) {
    int sm = max(i * i, ((l + i - 1) / i) * i);
    for (int m = sm; m <= h; m += i) {
      isPrime[m - l] = false;
    }
  }

  for (int i = 0; i < isPrime.size(); i++) {
    if (isPrime[i]) cout << (i + l) << " ";
  }
  cout << '\n';
}
void solve() {
  int l, r;
  cin >> l >> r;

  segSeive(l, r);
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}