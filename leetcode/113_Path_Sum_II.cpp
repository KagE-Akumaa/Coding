/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
 public:
  void backtrack(TreeNode* root, vector<vector<int>>& ans, vector<int>& temp,
                 int sum, int ts) {
    if (!root) return;
    sum += root->val;
    temp.push_back(root->val);
    if ((sum == ts) && (!root->left && !root->right)) {
      ans.push_back(temp);
      temp.pop_back();
      return;
    }

    backtrack(root->left, ans, temp, sum, ts);
    temp.pop_back();
    temp.push_back(root->val);
    backtrack(root->right, ans, temp, sum, ts);
    temp.pop_back();
  }
  vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    if (!root) return {};

    vector<vector<int>> ans;
    vector<int> temp;
    int sum = 0;
    backtrack(root, ans, temp, sum, targetSum);

    return ans;
  }
};