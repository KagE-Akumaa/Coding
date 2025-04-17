#include <bits/stdc++.h>
using namespace std;
class Multiplies{
     int factor;
public:
     Multiplies(int f): factor(f) {}
     int operator()(int x) {return x*factor;}
};
int main(){
    // write here
   vector<int> arr{1,2,3,4,5};
  // transform(arr.begin(), arr.end(), arr.begin(), Multiplies(3));
   transform(arr.begin(), arr.end(), arr.begin(),[](int a){return a*3;});
   arr.erase(remove_if(arr.begin(), arr.end(),[](int a){return a < 10;}),arr.end());
   for(int i: arr)
       cout << i << " ";

}

