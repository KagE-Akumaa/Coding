#include <bits/stdc++.h>
using namespace std;

bool hasUnique(int i){
    bool digits[10] = {false};
    while(i > 0){
        int d = i%10;
        if(digits[d])
            return false;
        digits[d] = true;
        i/=10;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int y; cin >> y;
   /*for(int i = y+1; i<=10000; i++){
        int c = log10(i)+1;
        int temp = i;
        unordered_set<int>s;
        while(temp>0){
            s.insert(temp%10);
            temp/=10;
        }
        if(s.size()==c){
            cout << i << endl;
            break;
        }
    }*/
    //optimized code
    /*for(int i = y+1; i <= 10000; i++){
        string s = to_string(i);
        unordered_set<char>us(s.begin(),s.end());
        if(us.size()==s.size()){
            cout << i << endl;
            break;
        }
    }*/
    //further optimized

    for(int i = y+1; i<=10000; i++){
        if(hasUnique(i)){
            cout << i << endl;
            break;
        }
    }


    

    return 0;
}
    