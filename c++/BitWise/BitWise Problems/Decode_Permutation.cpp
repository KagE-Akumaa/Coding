/*

Decode Permutation
There is an integer array perm that is a permutation of the first n positive
integers, where n is always odd.

It was encoded into another integer array encoded of length n - 1, such that
encoded[i] = perm[i] XOR perm[i + 1]. For example, if perm = [1,3,2], then
encoded = [2,1].

Given the encoded array, return the original array perm. It is guaranteed that
the answer exists and is unique.

Constraints:

3 <= n < 10^5

n is odd.

encoded.length == n - 1

Example :

Input: encoded = [3,1]

Output: [1,2,3]

Explanation: If perm = [1,2,3], then encoded = [1 XOR 2,2 XOR 3] = [3,1]
*/
#include <bits/stdc++.h>
#define int long long int
using namespace std;

vector<int> decode(vector<int> encoded) {
  int n = encoded.size() + 1;
  vector<int> ans(n);
  int total = 0;
  for (int i = 1; i <= n; i++) total ^= i;
  // xor odd

  int xodd = 0;
  for (int i = 1; i < encoded.size(); i += 2) xodd ^= encoded[i];

  ans[0] = total ^ xodd;
  for (int i = 1; i < n; i++) ans[i] = ans[i - 1] ^ encoded[i - 1];
  return ans;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> encoded(n - 1);
  for (int &I : encoded) cin >> I;
  vector<int> ans = decode(encoded);
  for (int i : ans) cout << i << " ";
  return 0;
}