#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  int n;
  cin >> n;

  int count = 1;
  for (int i = 2; i * i <= n; i++) {
    int c = 0;
    while (n % i == 0) {
      n /= i;
      c++;
    }
    count = count * (c + 1);
  }

  if (n > 1) {
    count *= 2;  // n is prime
  }

  cout << count << " ";
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}