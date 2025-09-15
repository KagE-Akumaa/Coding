#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;
vector<int> maxKDistinct(vector<int>& nums, int k) {
    set<int> s(nums.begin(), nums.end());

    vector<int> v(s.begin(), s.end());
    sort(v.begin(), v.end(), greater<int>());
    vector<int> ans;
    if (k <= v.size()) {
        for (int i = 0; i < k; i++) ans.push_back(v[i]);
        return ans;
    } else {
        for (int i = 0; i < v.size(); i++) {
            ans.push_back(v[i]);
        }
        return ans;
    }
}
int main() {
    int n = 5;
    vector<int> v{84, 93, 100, 77, 90};

    int k = 3;

    vector<int> ans = maxKDistinct(v, k);

    for (int i : ans) cout << i << " ";
}