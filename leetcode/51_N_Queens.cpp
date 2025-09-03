#include <bits/stdc++.h>
#define int long long int
using namespace std;
bool isValidPos(vector<string>& grid, int i, int j, int n) {
  for (int col = 0; col < j; col++) {
    if (grid[i][col] == 'Q') return false;
  }

  for (int row = 0; row < i; row++) {
    if (grid[row][j] == 'Q') return false;
  }

  int x = i, y = j;
  while (x >= 0 && y >= 0) {
    if (grid[x][y] == 'Q') return false;
    x--;
    y--;
  }
  x = i;
  y = j;

  while (x >= 0 && y < n) {
    if (grid[x][y] == 'Q') return false;
    x--;
    y++;
  }
  return true;
}
void Nqueens(vector<vector<string>>& ans, vector<string>& grid, int n, int i) {
  if (i == n) {
    ans.push_back(grid);

    return;
  }
  for (int j = 0; j < n; j++) {
    if (isValidPos(grid, i, j, n)) {
      grid[i][j] = 'Q';
      Nqueens(ans, grid, n, i + 1);
      grid[i][j] = '.';
    }
  }
}
vector<vector<string>> solveNQueens(int n) {
  vector<vector<string>> ans;

  vector<string> grid(n, string(n, '.'));

  Nqueens(ans, grid, n, 0);

  return ans;
}
void solve() {
  int n;
  cin >> n;
  vector<vector<string>> ans = solveNQueens(n);

  for (int i = 0; i < ans.size(); i++) {
    for (int j = 0; j < ans[i].size(); j++) {
      cout << ans[i][j] << endl;
    }
    cout << endl;
  }
}
int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  //  cin >> t;
  while (t--) solve();
  return 0;
}