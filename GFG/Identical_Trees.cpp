/* A binary tree node


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
 public:
  void pre(Node* root, vector<int>& ans) {
    if (!root) return;

    ans.push_back(root->data);
    pre(root->left, ans);
    pre(root->right, ans);
  }
  // Function to check if two trees are identical.
  bool isIdentical(Node* r1, Node* r2) {
    // Your Code here
    if (!r1 && !r2) return true;

    vector<int> arr, jrr;

    pre(r1, arr);
    pre(r2, jrr);

    return arr == jrr;
  }
};