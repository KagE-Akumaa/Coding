// given an array all numbers are repeated twice except one find that number

#include <bits/stdc++.h>
using namespace std;

int unique(vector<int> res)
{
     int ans = 0;
     for(int i: res)
          ans = ans ^ i;

     return ans;
}
int main()
{
     int n;
     cin >> n;
     vector<int> res(n);
     for(int &i: res)
          cin >> i;
     cout << unique(res) << endl;
}
/*
Sample test case
5
1 1 2 2 3

Output - 3
*/