/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
 public:
  int height(Node* root) {
    // code here
    if (!root) return 0;

    int l = 0;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
      int lvl = q.size();

      for (int i = 0; i < lvl; i++) {
        Node* curr = q.front();
        q.pop();

        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
      }
      l++;
    }

    return l - 1;
  }
};