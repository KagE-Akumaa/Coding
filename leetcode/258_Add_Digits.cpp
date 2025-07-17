#include <bits/stdc++.h>
#define int long long int
using namespace std;
int addDigits(int n) {
  /*while (true) {
    int sum = 0;
    while (n) {
      int rem = n % 10;
      sum = sum + rem;

      n = n / 10;
    }
    if(sum == 0)
      return sum;
    int c = log10(sum) + 1;
    if (c == 1) {
      return sum;
    }
    n = sum;
  }*/

  if (n == 0) return 0;
  return 1 + (n - 1) % 9;
}
void solve() {
  int n;
  cin >> n;

  cout << addDigits(n) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}