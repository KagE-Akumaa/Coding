/*
Time limit: 1.00 s
Memory limit: 512 MB



Your task is to efficiently calculate values a^b modulo 10^9+7.
Note that in this task we assume that 0^0=1.
Input
The first input line contains an integer n: the number of calculations.
After this, there are n lines, each containing two integers a and b.
Output
Print each value a^b modulo 10^9+7.
Constraints

1 \le n \le 2 \cdot 10^5
0 \le a,b \le 10^9

Example
Input:
3
3 4
2 8
123 123

Output:
81
256
921450052
*/
#include <bits/stdc++.h>
#define int long long int
using namespace std;
const int mod = 1e9 + 7;
int power(int a, int b) {
  int res = 1;
  while (b) {
    if (b & 1) res = (res * a) % mod;

    a = (a * a) % mod;
    b = b >> 1;
  }
  return res;
}
void solve() {
  int a, b;
  cin >> a >> b;
  if (a == 0 && b == 0) {
    cout << "1" << endl;
    return;
  }
  cout << power(a, b) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}