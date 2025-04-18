/*Sort Integers by The Number of 1 Bits
Given an integer array arr. You have to sort the integers in the array in ascending order by the
number of 1's in their binary representation and in case of two or more integers have the same
number of 1's you have to sort them in ascending order.

Return the sorted array.

Constraints:

1 <= arr.length <= 500

0 <= arr[i] <= 10^4

Example :

Input: arr = [0,1,2,3,4,5,6,7,8]

Output: [0,1,2,4,8,3,5,6,7]

Explantion: [0] is the only integer with 0 bits.
[1,2,4,8] all have 1 bit.
[3,5,6] have 2 bits.
[7] has 3 bits.
The sorted array by bits is [0,1,2,4,8,3,5,6,7] */

#include <bits/stdc++.h>
using namespace std;
int countBit(int n) {
    int c = 0;
    while (n > 0) {
        n = n & (n - 1);
        c++;
    }
    return c;
}
bool compare(int a, int b) {
    int ca = countBit(a);
    int cb = countBit(b);
    if(ca == cb)
     return a < b;

     return ca < cb;
}
vector<int> sortByBits(vector<int>& arr) {
     //using a compare function 
  //  sort(arr.begin(), arr.end(), compare);
    // using a lambda function

    sort(arr.begin(), arr.end(), [](int a, int b){
     int ca = countBit(a);
     int cb = countBit(b);

     return (ca == cb) ? a < b : ca < cb;
    });
    return arr;
}
int main() {
    int n;
    cin >> n;
    vector<int> res(n);
    for (int& i : res) cin >> i;
    vector<int> sorted_array = sortByBits(res);

    for (int i : sorted_array) cout << i << " ";
    cout << '\n';
}
/*
Sample input
9
0 1 2 3 4 5 6 7 8 9

output - 0 1 2 4 8 3 5 6 7 
*/