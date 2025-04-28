#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long a, b, c;
    cin >> a >> b >> c;
    priority_queue<long long> q;
    q.push(a+b+c);
    q.push(a*b*c);
    q.push((a+b)*c);
    q.push(a*(b+c));

    cout << q.top();

    return 0;
}
    