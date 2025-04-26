/*
The Tribonacci sequence Tn is defined as follows:

T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

Given n, return the value of Tn.



Example 1:

Input: n = 4
Output: 4
Explanation:
T_3 = 0 + 1 + 1 = 2
T_4 = 1 + 1 + 2 = 4
*/
#include <bits/stdc++.h>
#define int long long int
using namespace std;
const int mod = 1e9 + 7;
class Mat {
  int sz = 2;

 public:
  vector<vector<int>> m;

  Mat(int sz) {
    this->sz = sz;
    m = vector<vector<int>>(sz, vector<int>(sz, 0));
  }

  void identity() {
    // make an identity matrix for multiplication
    for (int i = 0; i < sz; i++) {
      m[i][i] = 1;
    }
  }
  Mat operator*(Mat &a) {
    // multiply 2 matrix
    int n = a.m.size();
    Mat res(n);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++)
        for (int k = 0; k < n; k++) {
          res.m[i][j] += m[i][k] * a.m[k][j];
          res.m[i][j] %= mod;
        }
    }

    return res;
  }
};
void solve() {
  int n;
  cin >> n;
  if (n == 0) {
    cout << 0 << '\n';
    return;
  }
  if (n == 1 || n == 2) {
    cout << 1 << '\n';
    return;
  }
  Mat res(3);
  res.identity();
  Mat T(3);
  T.m = {{1, 1, 1}, {1, 0, 0}, {0, 1, 0}};
  n = n - 2;
  while (n) {
    if (n & 1) res = T * res;
    T = T * T;
    n = n >> 1;
  }
  // base vector is [1,1,0]

  int Tn = (res.m[0][0] * 1 + res.m[0][1] * 1 + res.m[0][2] * 0);
  cout << Tn << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  //  cin >> t;
  while (t--) solve();
  return 0;
}