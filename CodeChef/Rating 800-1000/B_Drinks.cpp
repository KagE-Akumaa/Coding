#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    // problem logic here 
    int n;
    cin >> n;

    vector<double>arr(n);
    for(double &i: arr)
     cin >> i;


     double per = 0;
     for(int i = 0; i<n; i++)
     {
          per = per + (double)arr[i]/100;
     }

     cout << fixed << setprecision(12) << ((double)per/n)*100 << endl;

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
  //  cin >> t; // comment if only one test case
    while (t--) solve();
    return 0;
}