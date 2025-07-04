#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool isHappy(int n) {
  unordered_set<int> mpp;

  while (true) {
    int sum = 0;
    while (n > 0) {
      int rem = n % 10;
      n = n / 10;
      sum += pow(rem, 2);
    }
    if (sum == 1) return true;
    if (mpp.count(sum)) return false;
    mpp.insert(sum);

    n = sum;
  }
}
void solve() {
  int n;
  cin >> n;
  int sum = 0;

  cout << isHappy(n) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}