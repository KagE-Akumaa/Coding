#include <bits/stdc++.h>
#define int long long int
using namespace std;
int removeConsecutiveSame(vector<string>& arr) {
  // Your code goes here
  vector<string> s;

  for (string i : arr) {
    if ((!s.empty()) && (s.back() == i)) {
      s.pop_back();
    } else
      s.push_back(i);
  }

  return s.size();
}
void solve() {
  int n;
  cin >> n;
  vector<string> s(n);

  for (string& i : s) cin >> i;

  cout << removeConsecutiveSame(s) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  //   cin >> t;
  while (t--) solve();
  return 0;
}