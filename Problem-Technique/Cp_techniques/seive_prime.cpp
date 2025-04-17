#include <bits/stdc++.h>
using namespace std;
const int Nmax = 1000001;

vector<bool> isPrime(Nmax, true);

void seive(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        
        if(isPrime[i] == true)
        {
            // mark the factor to false;
            for(int j = i * i; j<=n; j += i){
                isPrime[j] = false;
            }
        }

    }
}
int main() {
    int n;
    printf("Enter the number from which you want prime\n");
    cin >> n;

    seive(n);
    for (int i = 2 ; i <= n; i++) {
        if (isPrime[i] == true)
           cout << i << " ";
    }
    pair<int, int> p;
    
}