/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
class Solution {
 public:
  void pre(Node* root, int& c) {
    if (!root) return;

    if (root->left || root->right) c++;

    pre(root->left, c);
    pre(root->right, c);
  }
  int countNonLeafNodes(Node* root) {
    // Code here
    if (!root) return 0;

    int c = 0;
// Using dfs
#if 0
        pre(root, c);
        
        return c;
#endif

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
      int lvl = q.size();

      for (int i = 0; i < lvl; i++) {
        Node* curr = q.front();
        q.pop();

        if (curr->left || curr->right) c++;
        if (curr->left) {
          q.push(curr->left);
        }
        if (curr->right) {
          q.push(curr->right);
        }
      }
    }
    return c;
  }
};