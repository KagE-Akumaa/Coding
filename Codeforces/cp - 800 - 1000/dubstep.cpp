#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;
    cin >> str;

    string result = "";
    size_t pos = 0;
    bool first = true;

    while ((pos = str.find("WUB")) != string::npos) {
        if (pos > 0) {
            if (!first) result += " ";
            result += str.substr(0, pos);
            first = false;
        }
        str.erase(0, pos + 3);
    }

    if (!str.empty()) {
        if (!first) result += " ";
        result += str;
    }

    cout << result << endl;
    return 0;
}
