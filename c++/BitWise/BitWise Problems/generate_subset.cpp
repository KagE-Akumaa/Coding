// Generate all the subset of a given string

#include <bits/stdc++.h>
using namespace std;

void overlayChar(string s, int number, vector<string>& str)
{
     // step 2 according to the set bit we will print or push the string
     int j = 0;
     string ans = "";
    /* while(number > 0)
     {
          if(number&1){
               ans.push_back(s[j]);
          }
          j++;
          number  = number >> 1;
     }
     str.push_back(ans);
     */
    // using for loop

    for(int k = 0; k<s.size(); k++)
    {
     if(number & (1 << k))
          ans.push_back(s[k]);
    }
    str.push_back(ans);
}
vector<string> generateSubset(string s)
{
     vector<string> str; 
     // total subset in a string of length n is 2^n
     // step 1- create a bit mask from 0 to 2^n-1 
     int n = s.size();
     for(int i = 0; i<(1<< n); i++)
     {
          overlayChar(s, i, str);
     }
     return str;
}
int main()
{
     string s ;
     cin >> s;

     vector<string> subset = generateSubset(s);

     for(string ch: subset)
          cout << ch << '\n';

}