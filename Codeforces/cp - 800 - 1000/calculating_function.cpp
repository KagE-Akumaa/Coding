#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n;
    cin >> n;

    long long seven, sodd;

    if (n % 2 == 1) { // Odd n
        seven = (n / 2) * ((n + 2) / 2);
        sodd = ((n + 1) / 2) * ((n + 1) / 2);
    } else { // Even n
        seven = (n / 2) * ((n + 2) / 2);
        sodd = (n / 2) * (n / 2);
    }

    cout << seven - sodd << "\n";

    return 0;
}
