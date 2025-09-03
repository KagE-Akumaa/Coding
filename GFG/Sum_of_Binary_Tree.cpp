
struct Node {
  int data;
  struct Node* left;
  struct Node* right;

  Node(int x) {
    data = x;
    left = right = nullptr;
  }
};

// Function to return a list containing the level order traversal in spiral
// form.
class Solution {
 public:
  void preorder(Node* root, int& sum) {
    if (!root) return;

    sum += root->data;
    preorder(root->left, sum);
    preorder(root->right, sum);
  }
  int sumBT(Node* root) {
// code here

// Using dfs
#if 0
        int sum = 0;
        
        preorder(root, sum);
        
        return sum;
#endif

    queue<Node*> q;
    q.push(root);

    int sum = 0;

    while (!q.empty()) {
      int lvl = q.size();

      for (int i = 0; i < lvl; i++) {
        Node* curr = q.front();
        q.pop();

        sum += curr->data;

        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
      }
    }
    return sum;
  }
};