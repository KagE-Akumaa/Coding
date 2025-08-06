#include <bits/stdc++.h>
#define int long long int
using namespace std;
vector<char> checkS(string s) {
  vector<char> ans;
  for (char ch : s) {
    if (ch != '#') {
      ans.push_back(ch);
    } else {
      if (!ans.empty()) {
        ans.pop_back();
      }
    }
  }

  return ans;
}
string checkStr(string &a) {
  for (int i = 1; i < a.size(); i++) {
    if (a[i] == '#') {
      a[i - 1] = '0';
      a[i] = '0';

      int l = 0, r = a.size() - 1;
      while (l <= r) {
        if (a[l] == '0') {
          swap(a[l], a[r]);
          r--;
        }
        l++;
      }
    }
  }
  int count = 0;

  for (char ch : a) {
    if (ch == '0') count++;
  }
  count = count * 2;

  while (count && !a.empty()) {
    a.pop_back();
  }
  return a;
}
bool backspaceCompare(string s, string t) {
  vector<char> str = checkS(s);
  vector<char> prt = checkS(t);

  if (prt.size() != str.size()) return false;

  for (int i = 0; i < str.size(); i++) {
    if (str[i] != prt[i]) return false;
  }
  return true;

#if 0
  string str = checkStr(s);
  string ptr = checkStr(t);

  cout << str << endl;
  cout << ptr << endl;
  return str == ptr;
#endif
}
void solve() {
  string s, str;
  cin >> s >> str;

  if (backspaceCompare(s, str)) {
    cout << "TRUE" << endl;
    return;
  }
  cout << "FALSE" << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  //  cin >> t;
  while (t--) solve();
  return 0;
}