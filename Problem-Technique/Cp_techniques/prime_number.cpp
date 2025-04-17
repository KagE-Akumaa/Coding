#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    // find if n is a prime number or not
    bool flag = false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << "False" << endl;
            flag = true;
            break;
        }    }
    if (!flag)
        cout << "True :" << endl;
}