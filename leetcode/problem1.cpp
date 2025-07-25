#include <bits/stdc++.h>
#define int long long int
using namespace std;
const int k = 1e7 + 1;
vector<bool> primes(k, true);
bool already_done = false;
void genPrimes() {
  if (already_done) return;

  primes[0] = false;
  primes[1] = false;

  for (long long i = 2; i * i < k; i++) {
    if (primes[i]) {
      for (long long j = i * i; j < k; j += i) primes[j] = false;
    }
  }
  already_done = true;
}
long long splitArray(vector<int>& nums) {
  vector<int> a, b;

  genPrimes();
  for (long long i = 0; i < nums.size(); i++) {
    if (primes[i]) {
      a.push_back(nums[i]);
    } else
      b.push_back(nums[i]);
  }

  long long sumA = accumulate(a.begin(), a.end(), 0);
  long long sumB = accumulate(b.begin(), b.end(), 0);
  return abs(sumA - sumB);
}
void solve() {
  int n;
  cin >> n;
  vector<int> res(n);
  for (int& i : res) cin >> i;

  cout << splitArray(res) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}