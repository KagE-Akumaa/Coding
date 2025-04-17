#include <bits/stdc++.h>
#define int long long int
using namespace std;

vector<int> prime;
vector<int> getPrimes(int limit) {
  vector<int> sieve(limit + 1, 1);
  sieve[0] = sieve[1] = 0;
  for (int i = 2; i * i <= limit; ++i) {
    if (sieve[i]) {
      for (int j = i * i; j <= limit; j += i) sieve[j] = 0;
    }
  }
  vector<int> primes;
  for (int i = 2; i <= limit; ++i)
    if (sieve[i]) primes.push_back(i);
  return primes;
}

int stringMod(string &s, int mod) {
  int res = 0;
  for (char ch : s) {
    res = (res * 10 + (ch - '0')) % mod;
  }
  return res;
}
void solve() {
  int x, k;
  cin >> x >> k;
  string y = "";
  while (k--) {
    y = y + to_string(x);
  }
  if (y == "1") {
    cout << "NO\n";
    return;
  }

  for (int i : prime) {
    if (stringMod(y, i) == 0 && y != to_string(i)) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  prime = getPrimes(10000);
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}