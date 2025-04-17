#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool valid(vector<int>& res, int mid, int h) {
  int total_hours = 0;
  for (int bananas : res) {
    total_hours += (bananas + mid - 1) / mid;
  }
  return total_hours <= h;
}

int minEatingSpeed(vector<int>& res, int h) {
  int l = 1, r = *max_element(res.begin(), res.end());
  int k = r;

  while (l <= r) {
    int mid = (l + r) / 2;
    if (valid(res, mid, h)) {
      k = mid;
      r = mid - 1;
    } else {
      l = mid + 1;
    }
  }
  return k;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, h;
  cin >> n >> h;
  vector<int> res(n);
  for (int& i : res) cin >> i;
  int k = minEatingSpeed(res, h);
  cout << k;
  return 0;
}