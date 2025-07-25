#include <bits/stdc++.h>
#define int long long int
using namespace std;
vector<int> makeBeautiful(vector<int> arr) {
// code here
#if 0
        stack<int> s;
        
        for(int i: arr)
        {
            if(!s.empty())
            {
                if((s.top()>=0 && i<0)||(s.top()<0 && i>=0))
                {
                    s.pop();
                }
                else
                    s.push(i);
            }
            else
                s.push(i);
        }
        
        vector<int> res;
        
        while(!s.empty())
        {
            res.push_back(s.top());
            s.pop();
        }
        reverse(res.begin(), res.end());
        return res;
#endif

  vector<int> ans;

  for (int i : arr) {
    if ((!ans.empty()) &&
        ((ans.back() < 0 && i >= 0) || (ans.back() >= 0 && i < 0))) {
      ans.pop_back();
    } else
      ans.push_back(i);
  }

  return ans;
}
void solve() {
  int n;
  cin >> n;

  vector<int> res(n);
  for (int &i : res) cin >> i;

  vector<int> ans = makeBeautiful(res);

  for (int i : ans) cout << i << " ";
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}