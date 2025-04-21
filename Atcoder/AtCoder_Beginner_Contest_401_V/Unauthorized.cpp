#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  vector<string> res(n);
  for (int i = 0; i < n; i++) cin >> res[i];
  bool isLogged = false;

  int c = 0;
  for (string str : res) {
    if (!isLogged && str == "private") c++;
    if (str == "login")
      isLogged = true;
    else if (str == "logout")
      isLogged = false;
  }
  cout << c << '\n';
  return 0;
}