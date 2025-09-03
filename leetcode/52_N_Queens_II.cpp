#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool isValid(vector<string>& grid, int n, int i, int j) {
  for (int row = 0; row < i; row++) {
    if (grid[row][j] == 'Q') return false;
  }
  // right diagonal

  int x = i, y = j;
  while (x >= 0 && y < n) {
    if (grid[x][y] == 'Q') return false;
    x--;
    y++;
  }
  // Left diagonal
  x = i;
  y = j;
  while (x >= 0 && y >= 0) {
    if (grid[x][y] == 'Q') return false;

    x--;
    y--;
  }
  return true;
}
void CountQueens(vector<string>& grid, int n, int i, int& count) {
  if (i == n) {
    count++;

    return;
  }

  for (int j = 0; j < n; j++) {
    if (isValid(grid, n, i, j)) {
      grid[i][j] = 'Q';
      CountQueens(grid, n, i + 1, count);
      grid[i][j] = '.';
    }
  }
}
int totalNQueens(int n) {
  if (n == 1) return 1;
  vector<string> grid(n, string(n, '.'));

  int count = 0;
  CountQueens(grid, n, 0, count);
  return count;
}
void solve() {
  int n;
  cin >> n;

  cout << totalNQueens(n) << endl;
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) solve();
  return 0;
}