#include <bits/stdc++.h>
#define int long long int
using namespace std;
void del(stack<int>& s, int me, int c) {
  if (c == me) {
    s.pop();
    return;
  }

  int t = s.top();
  s.pop();
  del(s, me, c + 1);
  s.push(t);
}
void deleteMid(stack<int>& s) {
  // code here..

  int n = s.size();
  int me = n / 2;

  del(s, me, 0);
}
void solve() {
  int n;
  cin >> n;
  stack<int> s;
  int i;
  while (n--) {
    cin >> i;
    s.push(i);
  }

  deleteMid(s);

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