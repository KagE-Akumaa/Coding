#include <bits/stdc++.h>

using namespace std;
int getIthbit(int x, int i) {
  int mask = (1 << i);
  return (x & mask) > 0 ? 1 : 0;
}
int setIthbit(int x, int i) {
  // go to that bit and set it by doing or with it if its 0 it becomes 1 if its
  // 1 already set
  int mask = (1 << i);
  return x | mask;
}
int clearIthbit(int x, int i) {
  // go to that but and flip all the bits and do and with number if the bit is 1
  // it will make it 0 otherwise its already cleared
  int mask = ~(1 << i);
  return x & mask;
}
int updateIthbit(int x, int i, int v) {
  x = clearIthbit(x, i);
  int mask = (v << i);
  return x | mask;
}
int clearLastIthbits(int x, int i) {
  int mask = (-1 << i);
  return x = x & mask;
}
int clearBitInRange(int x, int i ,int j)
{
  int a = (-1 << j+1);
  int b = (1 << i) -1;
  int mask = a|b;
  return x&mask;
}
int main() {
  int x = 31;
  int i;
  cin >> i;

  cout << getIthbit(x, i) << endl;
  cout << setIthbit(x, i) << endl;
  cout << clearIthbit(x, i) << endl;
  cout << updateIthbit(x, i, 0) << endl;
  cout << clearLastIthbits(x, i) << endl;
  cout << clearBitInRange(x, i, 3) << endl;

  return 0;
}