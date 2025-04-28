#include <bits/stdc++.h>
#define int long long int
using namespace std;
int n = 6;

void solve() {
  string str;
  cin >> str;
  int sumF = str[0] + str[1] + str[2];
  int sumS = str[3] + str[4] + str[5];
  if (sumF == sumS) {
    cout << "YES\n";
    return;
  }
  cout << "NO\n";
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}