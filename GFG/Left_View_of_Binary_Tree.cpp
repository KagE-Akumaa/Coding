/*

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
 */

class Solution {
 public:
  vector<int> leftView(Node* root) {
    // code here
    if (!root) return {};

    queue<Node*> q;
    q.push(root);

    vector<int> ans;

    while (!q.empty()) {
      int lvl = q.size();

      int left = -1;
      for (int i = 0; i < lvl; i++) {
        Node* curr = q.front();
        q.pop();

        if (i == 0) left = curr->data;

        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
      }
      ans.push_back(left);
    }

    return ans;
  }
};