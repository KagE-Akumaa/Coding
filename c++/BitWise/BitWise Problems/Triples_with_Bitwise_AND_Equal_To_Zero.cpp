/*Triples with Bitwise AND Equal To Zero
Given an integer array nums, return the number of AND triples.

An AND triple is a triple of indices (i, j, k) such that:

0 <= i < nums.length

0 <= j < nums.length

0 <= k < nums.length

nums[i] & nums[j] & nums[k] == 0, where & represents the bitwise-AND operator.

Constraints:

1 <= nums.length <= 1000

0 <= nums[i] < 2^16

Example :

Input: nums = [2,1,3]
 
Output: 12
 
Explanation: We could choose the following i, j, k triples:
(i=0, j=0, k=1) : 2 & 2 & 1
(i=0, j=1, k=0) : 2 & 1 & 2
(i=0, j=1, k=1) : 2 & 1 & 1
(i=0, j=1, k=2) : 2 & 1 & 3
(i=0, j=2, k=1) : 2 & 3 & 1
(i=1, j=0, k=0) : 1 & 2 & 2
(i=1, j=0, k=1) : 1 & 2 & 1
(i=1, j=0, k=2) : 1 & 2 & 3
(i=1, j=1, k=0) : 1 & 1 & 2
(i=1, j=2, k=0) : 1 & 3 & 2
(i=2, j=0, k=1) : 3 & 2 & 1
(i=2, j=1, k=0) : 3 & 1 & 2
*/

#include <bits/stdc++.h>
#define int long long int
using namespace std;
int countTriplets(vector<int> res){
     int c = 0, n = res.size();
     for(int i = 0; i<n; i++)
          for(int j = 0; j<n; j++)
               for(int k = 0; k<n; k++){
                    if((res[i]&res[j]&res[k]) == 0)
                         c++;
                   // cout << c << " ";
               }
     return c;
}
int countTriplets_2(vector<int> res)
{
     unordered_map<int, int> mpp;
     // we save the and of i and j to the map 
     for(int i = 0; i<res.size(); i++){
          for(int j = 0; j<res.size(); j++){
               mpp[res[i] & res[j]]++;
          }
     }

     int c = 0;
     for(int k = 0; k<res.size(); k++){
          for(auto&[andVal, freq]: mpp)
          {
               if((res[k]&andVal) == 0)
                    c = c + freq;
          }
     }
     return c;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> res(n);
    for(int &I: res){
     cin >> I;
    }

    cout << countTriplets_2(res) << '\n';
    return 0;
}