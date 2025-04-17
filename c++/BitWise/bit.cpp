#include <bits/stdc++.h>

using namespace std;
int getIthbit(int x, int i) {
  int mask = (1 << i);
  return (x & mask) > 0 ? 1 : 0;
}
int setIthbit(int x, int i) {
  int mask = (1 << i);
  return x | mask;
}
int clearIthbit(int x, int i) {
  int mask = ~(1 << i);
  return x & mask;
}
int main() {
  int x = 5;
  int i;
  cin >> i;

  cout << getIthbit(x, i) << endl;
  cout << setIthbit(x, i) << endl;
  cout << clearIthbit(x, i) << endl;

  return 0;
}