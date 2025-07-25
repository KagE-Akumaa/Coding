/*
The following problem is well-known: given integers n and m, calculate

,
where 2n = 2·2·...·2 (n factors), and  denotes the remainder of division of x by
y.

You are asked to solve the "reverse" problem. Given integers n and m, calculate

.
Input
The first line contains a single integer n (1 ≤ n ≤ 108).

The second line contains a single integer m (1 ≤ m ≤ 108).

Output
Output a single integer — the value of .

Examples
InputCopy
4
42
OutputCopy
10
InputCopy
1
58
OutputCopy
0
InputCopy
98765432
23456789
OutputCopy
23456789
Note
In the first example, the remainder of division of 42 by 24 = 16 is equal to 10.

In the second example, 58 is divisible by 21 = 2 without remainder, and the
answer is 0.


*/

#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  if (n > 30) {
    cout << m << endl;
    return;
  }
  int a = 2;
  int res = 1;

  while (n) {
    if (n & 1) {
      res = res * a;
    }
    a = a * a;
    n = n >> 1;
  }
  cout << m % res << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}