// given all the elements are present 3 times except 1 find the element

#include <bits/stdc++.h>
using namespace std;
void update(vector<int>& sumArray, int k) {
    for (int i = 0; i < sumArray.size(); i++) {
        int lb = k & (1 << i);
        if (lb)
            sumArray[i]++;
    }
}
int numConvert(vector<int> sumArray) {
    int num = 0;
    for (int i = 0; i < sumArray.size(); i++) {
       num |= sumArray[i] << i;
    }
    return num;
}
int unique(vector<int> res) {
    // step 1 make a sum array to store the column wise sum of the number in bit form
    vector<int> sumArray(32, 0);  // 32 bits for int

    for (int i : res) {
        update(sumArray, i);
    }

    // step 2 mod with 3 to get the binary representation of the number as the problem is 3N or 3N+1
    // Modulo 3: You mod each bit count with 3 to "cancel out" the triplets.

    for (int& i : sumArray) i = i % 3;
    // Step 3 convert the binary into decimal form
    return numConvert(sumArray);
}
int main() {
    int n;
    cin >> n;
    vector<int> res(n);
    for (int& i : res) cin >> i;

    cout << unique(res) << '\n';
}