/*
Chef will have
N
N guests in his house today. He wants to serve at least one dish to each of the
N
N guests. Chef can make two types of dishes. He needs one fruit and one
vegetable to make the first type of dish and one vegetable and one fish to make
the second type of dish. Now Chef has
A
A fruits,
B
B vegetables, and
C
C fishes in his house. Can he prepare at least
N
N dishes in total?
*/
#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve() {
  int N, A, B, C;
  cin >> N >> A >> B >> C;
  if (min(B, A + C) >= N)
    cout << "YES\n";
  else
    cout << "NO\n";
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}