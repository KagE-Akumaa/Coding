#include <bits/stdc++.h>
#define int long long int
using namespace std;


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i<n; i++)
        cin >>arr[i];
    int c = 1, mc = 1;
    for(int i = 1; i<n; i++){
        if(arr[i] <= arr[i-1])
            c = 1;
        else if(arr[i] > arr[i-1])
            c++;
        mc = max(c, mc);
    }
    cout << mc <<'\n';
    return 0;
}