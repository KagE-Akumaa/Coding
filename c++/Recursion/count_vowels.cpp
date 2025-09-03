#include <bits/stdc++.h>

#include <cctype>
#define int long long int
using namespace std;
void countVowels(string& s, int& count, int i) {
  if (i >= s.size()) return;

  if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    count++;

  countVowels(s, count, i + 1);
}
void solve() {
  string s;
  cin >> s;
  int count = 0;

  transform(s.begin(), s.end(), s.begin(), ::tolower);
  countVowels(s, count, 0);

  cout << count << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}