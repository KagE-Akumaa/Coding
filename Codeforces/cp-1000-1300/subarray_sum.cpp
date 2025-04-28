#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, x;
  cin >> n >> x;
  vector<int> res(n);
  for (int i = 0; i < n; i++) cin >> res[i];
  //   ********* Using Sliding Window ********** //
  // int l = 0, r = 0, c = 0;
  // int sum = 0;
  // while (r < n) {
  //   sum = sum + res[r];
  //   while (sum > x) {
  //     sum -= res[l];
  //     l++;
  //   }
  //   if (sum == x) c++;
  //   r++;
  // }
  // cout << c << '\n';
  // ************ Using Prefix Sum and Using Hashmap **********///

  unordered_map<int, int> mpp;
  mpp[0] = 1;
  int sum = 0, c = 0;
  for (int i = 0; i < n; i++) {
    sum = sum + res[i];
    c = c + mpp[sum - x];
    mpp[sum]++;
  }
  cout << c << endl;
  return 0;
}