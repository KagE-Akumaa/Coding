#include <bits/stdc++.h>
#define int long long int
using namespace std;
const int k = 100030002;  // To include 100030001

vector<bool> primes(k, true);
bool isReady = false;

void genPrimes() {
  if (isReady) return;
  primes[0] = 0;
  primes[1] = 0;
  int sq = sqrt(k);
  for (int i = 2; i <= sq; i++) {
    if (primes[i] == true) {
      for (int j = i * i; j <= k; j += i) {
        primes[j] = false;
      }
    }
  }
  isReady = true;
}
bool checkPrimes(int n) {
  int temp = n;
  int rev = 0;
  while (n) {
    int rem = n % 10;
    rev = rev * 10 + rem;
    n = n / 10;
  }
  if (temp == rev) return true;
  return false;
}
int primePalindrome(int n) {
  genPrimes();

  for (int i = n; i <= k; i++) {
    if (primes[i] == true) {
      if (checkPrimes(i)) {
        return i;
      }
    }
  }
  return -1;
}
void solve() {
  int n;
  cin >> n;

  cout << primePalindrome(n) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t = 1;
  while (t--) solve();
  return 0;
}
