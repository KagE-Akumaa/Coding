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
    for (int i = 0; i < sz; i++) {
      m[i][i] = 1;
    }
  }

  Mat operator*(Mat &a) {
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

// Computes F(n) using matrix exponentiation
int getFib(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;

  Mat T(2);
  T.m = {{1, 1}, {1, 0}};
  Mat res(2);
  res.identity();

  n--;  // since base matrix gives F(n+1) at [0][0]
  while (n) {
    if (n & 1) res = res * T;
    T = T * T;
    n >>= 1;
  }

  return res.m[0][0];
}

void solve() {
  int n, m;
  cin >> n >> m;

  int msum = getFib(m + 2);
  int nsum = getFib(n + 1);

  int result = (msum - nsum + mod) % mod;
  cout << result << endl;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}
