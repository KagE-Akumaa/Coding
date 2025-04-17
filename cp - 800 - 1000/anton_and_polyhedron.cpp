#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    unordered_map<string, int>mpp;
    mpp.emplace("Tetrahedron",4);
    mpp.emplace("Cube",6);
    mpp.emplace("Octahedron",8);
    mpp.emplace("Dodecahedron",12);
    mpp.emplace("Icosahedron",20);

    vector<string> str(n);  
    long long sum = 0;
    for(int i = 0; i<n; i++){
        cin >> str[i];
        if(mpp.count(str[i])){
            sum+= mpp[str[i]];
        }
    }
    cout << sum;

    return 0;
}
    