/*A prime number is a positive integer that has exactly two different positive
divisors: 1 and the integer itself. For example, 2 , 3 , 13 and 101 are prime
numbers; 1 , 4 , 6 and 42 are not.

You are given a sequence of digits from 1
 to 9
, in which every digit from 1
 to 9
 appears exactly once.

You are allowed to do the following operation several (maybe zero) times: choose
any digit from the sequence and delete it. However, you cannot perform this
operation if the sequence consists of only two digits.

Your goal is to obtain a sequence which represents a prime number. Note that you
cannot reorder the digits in the sequence.

Print the resulting sequence, or report that it is impossible to perform the
operations so that the resulting sequence is a prime number.

Input
The first line contains one integer t
 (1≤t≤5000
) — the number of test cases.

Each test case consists of one line containing a string of 9
 digits (without any characters between them). Each digit from 1
 to 9
 appears in this string exactly once.

Output
For each test case, print the answer on a separate line as follows:

if it is impossible to perform the described operations, print −1
;
otherwise, print any sequence that represents a prime number, which can be
obtained from the given string performing several (maybe zero) operations
described in the statement. If there are multiple such sequences, you can print
any one of them. Example InputCopy
4
123456789
987654321
243567918
576318429
OutputCopy
167
53
3571
57638429*/

#include <bits/stdc++.h>

#define int long long int
using namespace std;
const int k = 100;
vector<bool> primes(k + 1, true);
void generatePrimes() {
  primes[0] = false;
  primes[1] = false;

  for (int i = 2; i * i <= k; i++) {
    if (primes[i] == true) {
      for (int j = i * i; j <= k; j += i) primes[j] = false;
    }
  }
}
void solve() {
  string s;
  cin >> s;

  char ch = s[0];
  int num1 = ch - '0';
  // cout << num1 << endl;
  int total = 0;

  for (int i = 1; i < s.length(); i++) {
    int num2 = s[i] - '0';
    // cout << num2 << endl;

    total = num1 * 10 + num2;
    if (primes[total] == true) {
      cout << total << endl;
      return;
    }
  }
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  generatePrimes();
  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}