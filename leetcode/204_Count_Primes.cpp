#include <bits/stdc++.h>
#define int long long int
using namespace std;
const int k = 1e7 + 1;
vector<bool> primes(k, true);
bool isReady = false;

void genPrimes() {
  if (isReady) return;
  primes[0] = 0;
  primes[1] = 0;

  for (int i = 2; i * i < k; i++) {
    if (primes[i] == true) {
      for (int j = i * i; j < k; j += i) {
        primes[j] = false;
      }
    }
  }
  isReady = true;
}
int countPrimes(int n) {
  if (n <= 2) {
    return 0;
  }

  int c = 0;
  genPrimes();
  for (int i = 2; i < n; i++) {
    if (primes[i] == true) c++;
  }
  return c;
}
void solve() {
  int n;
  cin >> n;

  cout << countPrimes(n) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}