/*

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
 */

class Solution {
 public:
  int height(Node* root, bool& valid) {
    if (!root) return 0;
    if (valid) {
      int lh = height(root->left, valid);
      int rh = height(root->right, valid);

      if (abs(lh - rh) > 1) {
        valid = false;
      }

      return 1 + max(lh, rh);
    }
    return -1;
  }
  bool isBalanced(Node* root) {
    // Code here
    bool valid = true;

    height(root, valid);

    return valid;
  }
};