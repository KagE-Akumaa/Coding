/*

You are given a positive integer n
. You have to find 4
 positive integers a,b,c,d
 such that

a+b+c+d=n
, and
gcd(a,b)=lcm(c,d)
.
If there are several possible answers you can output any of them. It is possible
to show that the answer always exists.

In this problem gcd(a,b)
 denotes the greatest common divisor of a
 and b
, and lcm(c,d)
 denotes the least common multiple of c
 and d
.

Input
The input consists of multiple test cases. The first line contains a single
integer t (1≤t≤104 ) — the number of test cases. Description of the test cases
follows.

Each test case contains a single line with integer n
 (4≤n≤109
) — the sum of a
, b
, c
, and d
.

Output
For each test case output 4
 positive integers a
, b
, c
, d
 such that a+b+c+d=n
 and gcd(a,b)=lcm(c,d)
.*/

#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  int n;
  cin >> n;
  cout << n - 3 << " 1 1 1" << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}