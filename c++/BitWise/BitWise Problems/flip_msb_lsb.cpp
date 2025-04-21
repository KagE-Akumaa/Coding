/*Task
Input an integer N and flip the most significant and least significant bit
Print the number.
Sample 1:
Input
Output
6
3
*/

#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  n = n ^ 1;
  int msb = 0;
  int temp = n;
  while (temp > 0) {
    msb++;
    temp = temp >> 1;
  }
  // subtract by 0 to get the 0 based indexing on msb
  msb = msb - 1;
  n = n ^ (1 << msb);
  cout << n << endl;
  return 0;
}