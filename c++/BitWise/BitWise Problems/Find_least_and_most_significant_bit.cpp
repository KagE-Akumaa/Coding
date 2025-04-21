/*
Task
Write a program to input an integer N.
Print the position of the most significant bit, and print the least significant
bit. Sample 1: Input Output 15 3 1*/

#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  int lsb = 0;
  lsb = n & 1;
  int msb = 0;
  while (n > 0) {
    msb++;
    n = n >> 1;
  }
  cout << msb - 1 << " " << lsb << endl;

  return 0;
}