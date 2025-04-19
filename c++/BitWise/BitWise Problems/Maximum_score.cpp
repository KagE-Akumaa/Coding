/*Maximum Score
You are given an m x n binary matrix grid.

A move consists of choosing any row or column and toggling each value in that row or column (i.e., changing all 0's to 1's, and all 1's to 0's).

Every row of the matrix is interpreted as a binary number, and the score of the matrix is the sum of these numbers.

Return the highest possible score after making any number of moves (including zero moves).

Constraints:

m == grid.length

n == grid[i].length

1 <= m, n <= 20

grid[i][j] is either 0 or 1.

Example :



Input: grid = [[0,0,1,1],[1,0,1,0],[1,1,0,0]]
 
Output: 39
 
Explanation: 15 + 9 + 15 = 39*/

#include <bits/stdc++.h>
using namespace std;
void flipRow(vector<vector<int>>& mat, int row) {
     for (int j = 0; j < mat[0].size(); j++) {
         mat[row][j] = 1 - mat[row][j];
     }
 }
 
 void flipCol(vector<vector<int>>& mat, int col) {
     for (int i = 0; i < mat.size(); i++) {
         mat[i][col] = 1 - mat[i][col];
     }
 }
 
 int checkSum(vector<vector<int>>& mat) {
     int sum = 0;
     int cols = mat[0].size();
     for (int i = 0; i < mat.size(); i++) {
          // binary conversion is from right to left
          for(int j = mat[0].size() - 1, p = 0; j >= 0; j--, p++){
               sum += mat[i][j] * (1 << p);
           }
     }
     return sum;
 }
 
int maxmiumScore(vector<vector<int>> mat)
{
     // check for rows if first element is 0 flip the entire row
     for(int i = 0; i<mat.size(); i++){
          if(mat[i][0] == 0){
               // flip
               flipRow(mat, i);
          }
     }

     // check for cols if the number of 0 are greater than 1 then flip
    
     for(int i = 0; i<mat[0].size(); i++){
          int zc = 0, oc = 0;
          for(int j = 0; j<mat.size(); j++){
               if(mat[j][i] == 0)
                    zc++;
               else
                    oc++;
          }
          if(zc > oc){
               //flip col
               flipCol(mat, i);
          }
     }
     // flipped now check for sum
     return checkSum(mat);
}
int main()
{
     int m, n;
     cin >> m >> n;
     vector<vector<int>> mat(m, vector<int>(n));
     for(int i = 0; i<m; i++)
          for(int j = 0; j<n; j++)
               cin >> mat[i][j];
     
     cout << maxmiumScore(mat) << '\n';
}