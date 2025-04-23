// calculate factorial like 100!
#include <bits/stdc++.h>
#define int long long int
using namespace std;
void multiply(vector<int>& res, int num, int& size) {
  int prod = 1, carry = 0;
  for (int i = 0; i < size; i++) {
    prod = res[i] * num + carry;
    res[i] = prod % 10;
    carry = prod / 10;
  }
  while (carry) {
    res[size] = carry % 10;
    carry = carry / 10;
    size++;
  }
}
void BigFactorial(vector<int>& res, int n) {
  res[0] = 1;
  int size = 1;
  for (int i = 2; i <= n; i++) {
    multiply(res, i, size);
  }
  for (int i = size - 1; i >= 0; i--) cout << res[i];
}
void solve() {
  int n;
  cin >> n;
  vector<int> res(1000, 0);
  BigFactorial(res, n);
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}