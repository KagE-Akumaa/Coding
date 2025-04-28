#include <bits/stdc++.h>
using namespace std;

bool containsSubstring(const string &text, const string &pattern) {
    return text.find(pattern) != string::npos;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        string curr = x;
        bool flag = false;

        for (int ops = 0; ops <= 5; ops++) {
            if (containsSubstring(curr, s)) {
                cout << ops << '\n';
                flag = true;
                break;
            }
            curr += curr;  // Double the string
        }
        if(!flag)
            cout << -1 << '\n';  
    }

    return 0;
}
