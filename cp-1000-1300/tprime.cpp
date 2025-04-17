#include <bits/stdc++.h>
#define int long long int
using namespace std;
const int Nmax = 1000001;

vector<bool> isPrime(Nmax, true);
void checkPrime() {
  for (int i = 2; i <= Nmax; i++) {
    if (isPrime[i] == true) {
      for (int j = i * i; j <= Nmax; j += i) {
        isPrime[j] = false;
      }
    }
  }
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  checkPrime();
  int n;
  cin >> n;

  vector<int> res(n);
  for (int i = 0; i < n; i++) cin >> res[i];

  for (int i = 0; i < n; i++) {
    int x = res[i];
    int k = sqrt(res[i]);
    if (x == 1) {
      cout << "NO\n";
    } else if (k * k == x && isPrime[k] == true) {
      cout << "YES\n";
    } else
      cout << "NO\n";
  }

  return 0;
}