#include <bits/stdc++.h>
using namespace std;

void getCost(int n, int tc, int c1, int c2, int& mcost) {
  if (n == 0) {
    mcost = min(mcost, tc);
    return;
  }
  if (n < 0) return;

  getCost(n - 2, tc + c1, c1, c2, mcost);
  getCost(n - 3, tc + c2, c1, c2, mcost);
}
void solve() {
  int n;
  cin >> n;
  int mcost = INT_MAX;
  int tc = 0;
  getCost(n, tc, 4, 5, mcost);
  cout << mcost << endl;
}
int main() {
  // your code goes here
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
