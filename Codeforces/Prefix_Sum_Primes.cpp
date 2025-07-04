/*
We're giving away nice huge bags containing number tiles! A bag we want to
present to you contains n tiles. Each of them has a single number written on it
— either 1 or 2
.

However, there is one condition you must fulfill in order to receive the prize.
You will need to put all the tiles from the bag in a sequence, in any order you
wish. We will then compute the sums of all prefixes in the sequence, and then
count how many of these sums are prime numbers. If you want to keep the prize,
you will need to maximize the number of primes you get.

Can you win the prize? Hurry up, the bags are waiting!

Input
The first line of the input contains a single integer n
 (1≤n≤200000
) — the number of number tiles in the bag. The following line contains n
 space-separated integers a1,a2,…,an
 (ai∈{1,2}
) — the values written on the tiles.

Output
Output a permutation b1,b2,…,bn
 of the input sequence (a1,a2,…,an)
 maximizing the number of the prefix sums being prime numbers. If there are
multiple optimal permutations, output any.

Examples
InputCopy
5
1 2 1 2 1
OutputCopy
1 1 1 2 2
InputCopy
9
1 1 2 1 1 1 2 1 1
OutputCopy
1 1 1 2 1 1 1 2 1
Note
The first solution produces the prefix sums 1,2,3,5,7
 (four primes constructed), while the prefix sums in the second solution are
1,2,3,5,6,7,8,10,11 (five primes). Primes are marked bold and blue. In each of
these cases, the number of produced primes is maximum possible.
*/
#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> res(n);
  for (int &i : res) cin >> i;

  int onec = 0, twoc = 0;
  for (int i : res) {
    if (i == 1)
      onec++;
    else
      twoc++;
  }
  // cout << onec << " " << twoc << endl;
  vector<int> ans;
  if (twoc) {
    ans.push_back(2);
    twoc--;
  }
  if (onec) {
    ans.push_back(1);
    onec--;
  }

  while (twoc--) {
    ans.push_back(2);
  }
  while (onec--) {
    ans.push_back(1);
  }

  for (int i : ans) cout << i << " ";
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}