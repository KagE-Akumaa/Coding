#include <bits/stdc++.h>
#define int long long int
using namespace std;

void makeRowZero(vector<vector<int>>& matrix, int row) {
  for (int j = 0; j < matrix[0].size(); j++) {
    matrix[row][j] = 0;
  }
}
void makeColZero(vector<vector<int>>& matrix, int col) {
  for (int j = 0; j < matrix.size(); j++) {
    matrix[j][col] = 0;
  }
}

void setZeros(vector<vector<int>>& matrix) {
  // make a unordered_map for counting the zeros and getting the position of the
  // zeros
  unordered_set<int> rowSet, colSet;
  for (int i = 0; i < matrix.size(); i++) {
    for (int j = 0; j < matrix[0].size(); j++) {
      if (matrix[i][j] == 0) {
        rowSet.insert(i);
        colSet.insert(j);
      }
    }
  }

  for (int row : rowSet) {
    makeRowZero(matrix, row);
  }
  for (int col : colSet) {
    makeColZero(matrix, col);
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int m, n;
  cin >> m >> n;
  vector<vector<int>> mat(m, vector<int>(n));

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) cin >> mat[i][j];
  }
  setZeros(mat);

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}