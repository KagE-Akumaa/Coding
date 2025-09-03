#include <bits/stdc++.h>
#define int long long int
using namespace std;
void rev(stack<int>& s) {
  if (s.empty()) return;
  int val = s.top();
  s.pop();
  rev(s);
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

  rev(s);

  while (!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}