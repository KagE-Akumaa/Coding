#include <bits/stdc++.h>
#define int long long int
using namespace std;
int convert(string str, int n) {
  int result = 0;
  for (char bit : str) {
    result = (result << 1) | (bit - '0');
  }
  return result;
}

int addBinaryString(string a, string b, int n, int m) {
  int num1 = convert(a, n);
  int num2 = convert(b, m);

  return num1 + num2;
}
void solve() {
  int n, m;
  cin >> n >> m;
  string a, b;
  cin >> a >> b;

  int num = addBinaryString(a, b, n, m);
  cout << num << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}