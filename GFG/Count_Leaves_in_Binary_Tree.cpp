/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
 public:
  void pre(Node* root, int& c) {
    if (!root) return;

    if (!root->left && !root->right) c++;

    pre(root->left, c);
    pre(root->right, c);
  }
  // Function to count the number of leaf nodes in a binary tree.
  int countLeaves(Node* root) {
// write code here
// Using dfs
#if 0
        if(!root)
            return 0;
        int c = 0;
        
        pre(root, c);
        
        return c;
#endif

    if (!root) return 0;

    int c = 0;
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
      int lvl = q.size();

      for (int i = 0; i < lvl; i++) {
        Node* curr = q.front();
        q.pop();

        if (!curr->left && !curr->right) c++;

        if (curr->left) q.push(curr->left);

        if (curr->right) q.push(curr->right);
      }
    }

    return c;
  }
};