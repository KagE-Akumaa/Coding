#include <bits/stdc++.h>
#define int long long int
using namespace std;
void delMid(stack<int>& s, int k) {
  if (k == 0) {
    s.pop();
    return;
  }
  int val = s.top();
  s.pop();
  delMid(s, k - 1);
  s.push(val);
}
void solve() {
  int n;
  cin >> n;

  stack<int> s;
  while (n--) {
    int i;
    cin >> i;
    s.push(i);
  }

  int k = (s.size() - 1) / 2;

  delMid(s, k);

  while (!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  //  cin >> t;
  while (t--) solve();
  return 0;
}