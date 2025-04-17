#include <bits/stdc++.h>
#define int long long int
using namespace std;

bool isPalindrome(int x) {
  string s = to_string(x);
  int l = 0, r = s.size() - 1;
  while (l <= r) {
    if (s[l] != s[r]) return false;
    l++;
    r--;
  }
  return true;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int x;
  cin >> x;
  cout << (isPalindrome(x) ? "true" : "false") << '\n';
  return 0;
}