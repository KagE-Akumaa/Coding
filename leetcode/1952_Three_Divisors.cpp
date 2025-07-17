#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool isThree(int n) {
  int count = 0;

  for (int i = 1; i <= n; i++) {
    if (n % i == 0) count++;
  }
  if (count == 3) return true;
  return false;
}
void solve() {
  int n;
  cin >> n;

  if (isThree(n)) {
    cout << "True" << endl;
  } else
    cout << "False" << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}
