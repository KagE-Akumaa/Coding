#include <bits/stdc++.h>
#define int long long
using namespace std;

int digitalRoot(int x) {
  if (x == 0) return 0;
  return 1 + (x - 1) % 9;
}

int modPow(int base, int exp, int mod) {
  int result = 1;
  base %= mod;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % mod;
    base = (base * base) % mod;
    exp >>= 1;
  }
  return result;
}

void solve() {
  int A, N;
  cin >> A >> N;

  int d = digitalRoot(A);
  int result = modPow(d, N, 9);

  // Special case: when result == 0, digital root is 9
  if (result == 0) result = 9;

  cout << result << '\n';
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) solve();

  return 0;
}
