/*
B. Primes
time limit per test1 second
memory limit per test256 megabytes
A prime number is a natural number greater than 1 and has exactly 2 divisors
which are 1 and the number itself.

You are given a prime number n
, find any 2 prime numbers a
 and b
 such that a+b=n
 or state that no such pair of primes exists.

Input
The input contains a single prime number n
(2≤n≤107
).

Output
If there doesn't exist any 2 primes such that their summation is equal to n
 then print -1, otherwise print the 2 primes on a single line separated by a
space.

Examples
InputCopy
5
OutputCopy
2 3
InputCopy
11
OutputCopy
-1

*/

/*
#include <bits/stdc++.h>

#include <vector>
#define int long long int
using namespace std;
vector<bool> generatePrimes(int n) {
  vector<bool> primes(n + 1, true);
  primes[0] = false;
  primes[1] = false;
  for (int i = 2; i * i <= n; i++) {
    if (primes[i] == true) {
      for (int j = i * i; j <= n; j += i) {
        primes[j] = false;
      }
    }
  }
  return primes;
}
int targetFound(vector<int>& res, int target) {
  int l = 0, r = res.size() - 1;
  while (l <= r) {
    int sum = res[l] + res[r];
    if (sum == target) {
      cout << res[l] << " " << res[r] << endl;
      return 1;
    } else if (sum < target) {
      l++;
    } else
      r--;
  }
  return -1;
}
void solve() {
  int n;
  cin >> n;
  // Step 1 generate primes
  vector<bool> primes = generatePrimes(n);
  vector<int> res;
  // Step 2 add primes into an array
  for (int i = 0; i < primes.size(); i++) {
    if (primes[i] == true && i != n) res.push_back(i);
  }

  // step 3 binary search for target n

  if (targetFound(res, n) == -1) cout << "-1" << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}*/

// Mathematical solution
/*
Every prime number is odd except 2 so to get a odd number we have
to add one even number and one odd number even number is fixed that is 2
so formula is if we suppose a is even then b = n-a (a = 2)

so b = n-2 and after getting b check if b is prime if it is a prime number
we found our answer else -1
*/

#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool checkPrime(int b) {
  for (int i = 2; i * i <= b; i++) {
    if (b % i == 0) return false;
  }
  return true;
}
void solve() {
  int n;
  cin >> n;

  if (n <= 3) {
    cout << "-1" << endl;
    return;
  }
  int a = 2, b = 0;
  b = n - a;

  if (checkPrime(b)) {
    cout << a << " " << b << endl;
    return;
  }
  cout << -1 << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}