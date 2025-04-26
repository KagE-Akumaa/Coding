/*
The Fibonacci numbers can be defined as follows:

F_0=0
F_1=1
F_n = F_{n-2}+F_{n-1}

Your task is to calculate the value of F_n for a given n.
Input
The only input line has an integer n.
Output
Print the value of F_n modulo 10^9+7.
Constraints

0 \le n \le 10^{18}

Example
Input:
10

Output:
55*/
#include <bits/stdc++.h>

#include <vector>

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
    cout << "0" << endl;
    return;
  }
  Mat res(2);
  res.identity();
  Mat T(2);
  T.m = {{1, 1}, {1, 0}};
  if (n <= 2) {
    cout << "1" << endl;
    return;
  }
  n = n - 2;
  while (n) {
    if (n & 1) res = res * T;
    T = T * T;
    n = n >> 1;
  }
  cout << (res.m[0][0] + res.m[0][1]) % mod << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}