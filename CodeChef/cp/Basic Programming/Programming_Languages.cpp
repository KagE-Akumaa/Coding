#include <bits/stdc++.h>
#define int long long int
using namespace std;
pair<int, int> read_pair() {
  int x, y;
  cin >> x >> y;
  return {x, y};
}

void solve() {
  pair<int, int> n = read_pair();
  pair<int, int> a = read_pair();
  pair<int, int> b = read_pair();

  if ((n.first == a.first && n.second == a.second) ||
      (n.first == a.second && n.second == a.first))
    cout << "1\n";
  else if ((n.first == b.first && n.second == b.second) ||
           (n.first == b.second && n.second == b.first))
    cout << "2\n";
  else
    cout << "0\n";
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}