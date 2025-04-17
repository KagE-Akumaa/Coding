#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, t;
    cin >> n >> t;
    string str;
    cin >> str;

    while (t--) {  // Run for 't' seconds
        for (int i = 0; i < n - 1; i++) {
            if (str[i] == 'B' && str[i + 1] == 'G') {  
                swap(str[i], str[i + 1]);
                i++;  
            }
        }
    }

    cout << str << '\n';
    return 0;
}
