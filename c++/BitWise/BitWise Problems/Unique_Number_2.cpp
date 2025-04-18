// given an array each element appears twice except 2 find those 2 element

#include <bits/stdc++.h>
using namespace std;
pair<int, int> unique(vector<int> res)
{
     // xor every element will give the xor of 2 unique elements everything else cancels

     int ans = 0;
     for(int i: res)
          ans ^= i;
     // get the position of set bit because that set bit will be present in one of the 2 numbers
     int pos = 0;
     int temp = ans;
     while((temp&1) == 0){
          pos++;
          temp = temp>>1;
     }
     // filter the element which has set bit in pos
     int setA = 0, setB = 0, mask = (1 << pos);

     for(int i: res)
     {
          if((i & mask) > 0){
               setA ^= i;
          }
          else
               setB ^= i;
     }
     return {setA, setB};
}
int main()
{
     int n;
     cin >> n;
     vector<int> res(n);
     for(int &i: res)
          cin >> i;
    pair<int, int> ans = unique(res);
    cout << ans.first << " " << ans.second << endl;
}