#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {2,1,7,4,3,6,5};
    // sort in descending order using lambda function
    
    sort(arr.begin(), arr.end(), [](int a, int b) {return a > b;});
    for(int i: arr)
        cout << i << " ";
    cout << endl;
}
