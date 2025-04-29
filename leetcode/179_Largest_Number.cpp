#include <bits/stdc++.h>

#include <string>
#define int long long int
using namespace std;
string largetNumber(vector<int>& res) {
  auto a = [](int a, int b) {
    return to_string(a) + to_string(b) > to_string(b) + to_string(a);
  };

  string ans = "";
  sort(res.begin(), res.end(), a);
  for (int i : res) {
    ans += to_string(i);
  }
  if (ans[0] == '0') return "0";
  return ans;
}
void solve() {
  int n;
  cin >> n;
  vector<int> res(n);
  for (int& i : res) cin >> i;

  string s = largetNumber(res);
  cout << s << endl;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}