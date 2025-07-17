#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool isValid(string word) {
  if (word.length() < 3) return false;

  int vc = 0, cc = 0;

  for (char ch : word) {
    if (!isdigit(ch) && !isalpha(ch)) {
      return false;  // Invalid character
    }

    if (isalpha(ch)) {
      char c = tolower(ch);
      if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        vc++;
      } else {
        cc++;
      }
    }
  }

  return vc > 0 && cc > 0;
}
void solve() {
  string word;

  cin >> word;

  if (isValid(word))
    cout << "True" << endl;
  else
    cout << "False" << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}