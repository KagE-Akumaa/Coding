/*Total Hamming Distance
The Hamming distance between two integers is the number of positions at which
the corresponding bits are different.

Given an integer array nums, return the sum of Hamming distances between all the
pairs of the integers in nums.

Constraints:

1 <= nums.length <= 10^4

0 <= nums[i] <= 10^9

The answer for the given input will fit in a 32-bit integer.

Example 1:

Input: nums = [4,14,2]

Output: 6

Explanation: In binary representation, the 4 is 0100, 14 is 1110, and 2 is 0010
(just showing the four bits relevant in this case). The answer will be:
HammingDistance(4, 14) + HammingDistance(4, 2) + HammingDistance(14, 2) = 2 + 2
+ 2 = 6.*/
#include <bits/stdc++.h>
#define int long long int
using namespace std;
int totalHammingDistance(vector<int> res) {
  int sum = 0;
  for (int i = 0; i < res.size(); i++) {
    for (int j = i + 1; j < res.size(); j++) {
      cout << res[i] << " ";
    }
  }
  return 1;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> res(n);
  for (int& i : res) cin >> i;

  cout << totalHammingDistance(res) << '\n';

  return 0;
}
