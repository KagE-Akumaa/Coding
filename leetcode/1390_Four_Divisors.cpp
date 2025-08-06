#include <bits/stdc++.h>
#define int long long int
using namespace std;

int sumFourDivisors(vector<int> &nums) {
  int sum = 0;

  for (int n : nums) {
    int c = 0;
    int msum = 0;
    for (int i = 1; i * i <= n; ++i) {
      if (c > 4) break;
      if (n % i == 0) {
        c++;
        msum += i;
        if (i != n / i) {
          c++;
          msum += n / i;
        }
      }
    }

    if (c == 4) {
      sum += msum;
    }
  }
  return sum;
}
void solve() {
  int n;
  cin >> n;
  vector<int> res(n);
  for (int &i : res) cin >> i;

  cout << sumFourDivisors(res) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}