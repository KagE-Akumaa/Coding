/*
Time limit: 1.00 s
Memory limit: 512 MB



Your task is to efficiently calculate values a^{b^c} modulo 10^9+7.
Note that in this task we assume that 0^0=1.
Input
The first input line has an integer n: the number of calculations.
After this, there are n lines, each containing three integers a, b and c.
Output
Print each value a^{b^c} modulo 10^9+7.
Constraints

1 \le n \le 10^5
0 \le a,b,c \le 10^9

Example
Input:
3
3 7 1
15 2 2
3 4 5

Output:
2187
50625
763327764
*/

#include <bits/stdc++.h>
#define int long long int
using namespace std;
const int mod = 1e9 + 7;
const int mod2 = mod - 1;
int power(int a, int b, int m) {
  int res = 1;
  a %= m;
  if (a == 0 && b == 0) return res;
  while (b) {
    if (b & 1) res = (res * a) % m;

    a = (a * a) % m;
    b = b >> 1;
  }
  return res;
}
void solve() {
  int a, b, c;
  cin >> a >> b >> c;

  int res = power(b, c, mod2);
  int resC = power(a, res, mod);

  cout << resC << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}