/*Decode XORed Array
There is a hidden integer array arr that consists of n non-negative integers.

It was encoded into another integer array encoded of length n - 1, such that encoded[i] = arr[i] XOR arr[i + 1]. For example, if arr = [1,0,2,1], then encoded = [1,2,3].

You are given the encoded array. You are also given an integer first, that is the first element of arr, i.e. arr[0].

Return the original array arr. It can be proved that the answer exists and is unique.

Constraints:

2 <= n <= 10^4

encoded.length == n - 1

0 <= encoded[i] <= 10^5

0 <= first <= 10^5

Example 1:

Input: encoded = [1,2,3], first = 1
 
Output: [1,0,2,1]
 
Explanation: If arr = [1,0,2,1], then first = 1 and encoded = [1 XOR 0, 0 XOR 2, 2 XOR 1] = [1,2,3] */


#include <bits/stdc++.h>
using namespace std;
vector<int> decode(vector<int> encoded, int first)
{
     int n = encoded.size() + 1;
    vector<int> res(n);
    res[0] = first;
    
    for(int i = 1; i<n; i++){
        res[i] = res[i-1] ^ encoded[i-1];
    }
    return res;

}
/*
Sample input
4
1
1 2 3
1 0 2 1
*/
int main(){
     int n, first;
     cin >> n >> first;
     vector<int> encoded(n-1);
     for(int &i: encoded)
          cin >> i;
     
     vector<int> orignal = decode(encoded, first);

     for(int i: orignal)
          cout << i << " ";
}