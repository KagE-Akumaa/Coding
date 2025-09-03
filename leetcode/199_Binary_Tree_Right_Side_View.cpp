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
  void right_view(TreeNode* root, int& max_depth, int curr_depth,
                  vector<int>& ans) {
    if (!root) return;

    if (curr_depth > max_depth) ans.push_back(root->val);
    max_depth = max(curr_depth, max_depth);

    right_view(root->right, max_depth, curr_depth + 1, ans);
    right_view(root->left, max_depth, curr_depth + 1, ans);
  }
  vector<int> rightSideView(TreeNode* root) {
    if (!root) return {};
#if 0
    // using BFS
    vector<int> ans;
    queue<TreeNode*> q;

    q.push(root);
    while (!q.empty()) {
      int lvl = q.size();
      int last = -1;
      for (int i = 0; i < lvl; i++) {
        TreeNode* curr = q.front();
        q.pop();

        last = curr->val;
        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
      }

      ans.push_back(last);
    }

    return ans;
#endif
    // using dfs
    vector<int> ans;
    int max_depth = -1;
    right_view(root, max_depth, 0, ans);

    return ans;
  }
};