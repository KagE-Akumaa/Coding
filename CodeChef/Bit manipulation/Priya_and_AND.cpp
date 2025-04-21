/*
Priya and AND
Priya loves bitwise AND, but she hates programming. Help her solve this problem.

Given an array
A
A of size
N
N, let
B
i
j
B
ij
​
  denote the bitwise AND of
A
[
i
]
A[i] and
A
[
j
]
A[j]. You have to find the number of pairs
(
i
,
j
)
(i,j), such that
i
<
j
i<j and
B
i
j
=
A
[
i
]
B
ij
​
 =A[i].

Input Format
The first line of the input contains a single integer
T
T denoting the number of test cases.
The first line of each test case consists of a single integer
N
N, denoting the Size of Array
A
A.
The second line of each test case contains
N
N space-separated integers
A
1
,
A
2
,
A
3
.
.
.
A
N
A
1
​
 ,A
2
​
 ,A
3
​
 ...A
N
​
 .
Output Format
For each test case, output a single line, count of such pairs.
Constraints
1
≤
T
≤
100
1≤T≤100
1
≤
N
≤
100
1≤N≤100
1
≤
A
[
i
]
≤
100
1≤A[i]≤100
Sample 1:
Input
Output
2
5
1 1 1 1 1
1
10
10
0

*/
#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) cin >> arr[i];

  int c = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int num = arr[i] & arr[j];
      if (num == arr[i]) c++;
    }
  }
  cout << c << '\n';
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}