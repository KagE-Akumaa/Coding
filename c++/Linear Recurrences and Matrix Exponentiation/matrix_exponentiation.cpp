// nth fibonacci number
#include <bits/stdc++.h>
#define int long long int
using namespace std;
const int mod = 1e9 + 7;
const int sz = 2;
struct Mat {
  int m[sz][sz];
  Mat() { memset(m, 0, sizeof(m)); }
  void identity() {
    for (int i = 0; i < sz; i++) {
      m[i][i] = 1;
    }
  }
  Mat operator*(Mat a) {
    // multiply a with m
    Mat res;
    for (int i = 0; i < sz; i++) {
      for (int j = 0; j < sz; j++) {
        for (int k = 0; k < sz; k++) {
          res.m[i][j] += m[i][k] * a.m[k][j];
          res.m[i][j] %= mod;
        }
      }
    }
    return res;
  }
};
int Fib(int n) {
  Mat res;
  res.identity();
  Mat T;
  T.m[0][0] = T.m[0][1] = T.m[1][0] = 1;
  if (n <= 2) return 1;
  n = n - 2;
  while (n) {
    if (n & 1) res = res * T;
    T = T * T;
    n = n >> 1;
  }
  return (res.m[0][0] + res.m[0][1]) % mod;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  cout << Fib(n);
  return 0;
}