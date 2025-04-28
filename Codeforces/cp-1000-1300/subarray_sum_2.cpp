#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, k;
  cin >> n >> k;
  vector<int> res(n);
  for (int &i : res) cin >> i;
  unordered_map<int, int> mpp;
  mpp[0] = 1;
  int sum = 0, c = 0;
  for (int i = 0; i < n; i++) {
    sum += res[i];
    c += mpp[sum - k];
    mpp[sum]++;
  }
  cout << c << endl;
  return 0;
}