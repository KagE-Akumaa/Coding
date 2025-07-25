/*Pak Chanek has a prime number†
 n
. Find a prime number m
 such that n+m
 is not prime.

†
 A prime number is a number with exactly 2
 factors. The first few prime numbers are 2,3,5,7,11,13,…
. In particular, 1
 is not a prime number.

Input
Each test contains multiple test cases. The first line contains an integer t
 (1≤t≤104
) — the number of test cases. The following lines contain the description of
each test case.

The only line of each test case contains a prime number n
 (2≤n≤105
).

Output
For each test case, output a line containing a prime number m
 (2≤m≤105
) such that n+m
 is not prime. It can be proven that under the constraints of the problem, such
m always exists.

If there are multiple solutions, you can output any of them.

Example
InputCopy
3
7
2
75619
OutputCopy
2
7
47837
Note
In the first test case, m=2
, which is prime, and n+m=7+2=9
, which is not prime.

In the second test case, m=7
, which is prime, and n+m=2+7=9
, which is not prime.

In the third test case, m=47837
, which is prime, and n+m=75619+47837=123456
, which is*/

#include <bits/stdc++.h>

#include <vector>
#define int long long int
using namespace std;
const int k = 100000;
vector<bool> primes(k + 1, true);

void generate_Prime() {
  primes[0] = false;
  primes[1] = false;

  for (int i = 2; i * i <= k; i++) {
    if (primes[i] == true) {
      for (int j = i * i; j <= k; j += i) primes[j] = false;
    }
  }
}
void solve() {
  int n;
  cin >> n;

  int m = 0;
  for (int i = 2; i <= k; i++) {
    if (primes[i] == true) {
      int sum = i + n;
      // cout << sum << " ";
      if (i != n && primes[sum] == false) {
        cout << i << endl;
        return;
      }
    }
  }
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  generate_Prime();
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}