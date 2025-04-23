// add numbers greater than length of 18 digits > capacity of long long int
#include <bits/stdc++.h>

#include <string>
#define int long long int
using namespace std;
int charToInt(char ch) { return ch - '0'; }
char intToChar(int n) { return n + '0'; }
string addTwoString(string s1, string s2) {
  if (s1.length() > s2.length()) swap(s1, s2);
  reverse(s1.begin(), s1.end());
  reverse(s2.begin(), s2.end());
  string ans = "";
  int carry = 0;
  for (int i = 0; i < s1.length(); i++) {
    int d1 = charToInt(s1[i]);
    int d2 = charToInt(s2[i]);

    int sum = d1 + d2 + carry;
    int last_digit = sum % 10;
    carry = sum / 10;

    ans.push_back(intToChar(last_digit));
  }
  for (int i = s1.length(); i < s2.length(); i++) {
    int d2 = charToInt(s2[i]);
    int sum = d2 + carry;
    int last_digit = sum % 10;
    carry = sum / 10;

    ans.push_back(intToChar(last_digit));
  }
  // if there is a carry add to the ans string
  if (carry) ans.push_back(intToChar(carry));
  reverse(ans.begin(), ans.end());
  return ans;
}
void solve() {
  string s1, s2;
  cin >> s1 >> s2;

  string ans = addTwoString(s1, s2);
  cout << ans << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}