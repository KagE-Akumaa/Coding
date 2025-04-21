/*
AND Plus OR
Read problem statements in Hindi, Bengali, Mandarin Chinese, Russian, and
Vietnamese as well. Given an integer
x
x, find two non-negative integers
a
a and
b
b such that
(
a
∧
b
)
+
(
a
∨
b
)
=
x
(a∧b)+(a∨b)=x, where
∧
∧ is the bitwise AND operation and
∨
∨ is the bitwise OR operation.

Input
The first line of the input contains a single integer
T
T denoting the number of test cases. The description of
T
T test cases follows.
The first and only line of each test case contains a single integer
x
x.
Output
If there is no valid pair
(
a
,
b
)
(a,b), print a single line containing the integer
−
1
−1. Otherwise, print a single line containing two space-separated integers
a
a and
b
b.

If there are multiple solutions, you may print any one of them.

Constraints
1
≤
T
≤
1
0
5
1≤T≤10
5

1
≤
x
≤
1
0
18
1≤x≤10
18

Subtasks
Subtask #1 (30 points):

1
≤
T
≤
200
1≤T≤200
1
≤
x
≤
200
1≤x≤200
Subtask #2 (70 points): original constraints


*/
#include <bits/stdc++.h>

#include <utility>
#define int long long int
using namespace std;
pair<int, int> getPair(int x) {
  pair<int, int> p;
  int l = 0, r = x;
  while (l < r) {
    int num = (l & r) + (l | r);
    if (num == x) {
      p.first = l;
      p.second = r;
      l++;
      r--;
    } else if (num > x)
      r--;
    else
      l++;
  }
  return p;
}
void solve() {
  int x;
  cin >> x;
  int a = 0, b = x;
  cout << a << " " << x << '\n';
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}