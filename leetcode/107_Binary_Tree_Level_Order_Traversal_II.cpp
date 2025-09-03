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
  vector<vector<int>> levelOrderBottom(TreeNode* root) {
    if (!root) return {};

    vector<vector<int>> res;

    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
      int lvl = q.size();
      vector<int> ans;

      for (int i = 0; i < lvl; i++) {
        TreeNode* curr = q.front();
        q.pop();

        ans.push_back(curr->val);

        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
      }

      res.push_back(ans);
    }

    reverse(res.begin(), res.end());

    return res;
  }
};