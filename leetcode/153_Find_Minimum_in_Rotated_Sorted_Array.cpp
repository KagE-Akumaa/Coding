#include <bits/stdc++.h>

#include <vector>
#define int long long int
using namespace std;
int findMin(vector<int> nums) {
  int l = 0, r = nums.size() - 1;
  while (l < r) {
    int mid = l + (r - l) / 2;
    if (nums[mid] <= nums[r]) {
      r = mid;
    } else
      l = mid + 1;
  }
  return nums[l];
}
void solve() {
  int n;
  cin >> n;
  vector<int> res(n);
  for (int &i : res) cin >> i;
  cout << findMin(res) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) solve();
  return 0;
}

vector<int> numbers = {5, 15, 20};
vector<int> divided(numbers.size());
for (int i = 0; i < numbers.size(); i++) {
  divided[i] = numbers[i] % 5;
}