#include <bits/stdc++.h>
#define int long long int
using namespace std;

const int k = 1700;
bool flag = false;
vector<bool> ugly(k, false);

void getUgly() {
  if (flag) return;
  ugly[1] = true;

  for (int i = 1; i <= k; i++) {
    if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0) {
      ugly[i] = true;
    }
  }
  flag = true;
}

int nthUglyNumber(int n) {
  if (n == 1) return 1;

  getUgly();

  int c = 0;

  for (int i = 1; i <= k; i++) {
    if (c == n) {
      return i;
    }
    if (ugly[i]) {
      c++;
    }
  }
  for (int i = 1; i <= k; i++) cout << ugly[i] << " ";
  return -1;
}
void solve() {
  int n;
  cin >> n;

  cout << nthUglyNumber(n) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}