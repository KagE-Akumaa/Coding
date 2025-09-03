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
  void find(TreeNode* root, int& min_depth, int curr_depth) {
    if (!root) return;

    if (!root->left && !root->right) min_depth = min(min_depth, curr_depth);
    if (curr_depth >= min_depth) return;
    find(root->left, min_depth, curr_depth + 1);
    find(root->right, min_depth, curr_depth + 1);
  }
  int minDepth(TreeNode* root) {
    if (!root) return 0;
    // using dfs

    int min_depth = INT_MAX;
    find(root, min_depth, 1);
    return min_depth;

#if 0
         // using bfs
        int c = 1;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int lvl = q.size();
            for(int i = 0; i<lvl; i++)
            {
                TreeNode* curr = q.front();
                q.pop();

                if(!curr->left && !curr->right)
                {
                    return c;
                }
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
            c++;
        }
        return c;
#endif
  }
};