#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool checkSelf(int n) {
  int c = log10(n) + 1;
  if (c == 1) return true;

  int temp = n;
  while (temp) {
    int rem = temp % 10;
    if (rem == 0) return false;
    if (n % rem != 0) return false;
    temp = temp / 10;
  }
  return true;
}
vector<int> selfDividingNumbers(int left, int right) {
  vector<int> ans;

  for (int i = left; i <= right; i++) {
    if (checkSelf(i)) {
      ans.push_back(i);
    }
  }
  return ans;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int left, right;
  cin >> left >> right;

  vector<int> res = selfDividingNumbers(left, right);
  for (int i = 0; i < res.size(); i++) cout << res[i] << " ";

  return 0;
}