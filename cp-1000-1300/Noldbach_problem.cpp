#include <bits/stdc++.h>
#define int long long int
using namespace std;

const int Nmax = 100001;
vector<bool> isPrime(Nmax, true);
vector<int> res;
void checkPrime() {
  for (int i = 2; i <= Nmax; i++) {
    if (isPrime[i]) {
      res.push_back(i);
      for (int j = i * i; j <= Nmax; j += i) isPrime[j] = false;
    }
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  checkPrime();
  int n, k;
  cin >> n >> k;
  int c = 0;
  for (int i = 1; i < n; i++) {
    int candidate = res[i - 1] + res[i] + 1;
    if (isPrime[candidate] && candidate <= n) {
      c++;
    }
  }
  if (c >= k) {
    cout << "YES\n";
    return 0;
  }

  cout << "NO\n";

  return 0;
}