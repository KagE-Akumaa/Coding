/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
 public:
  Node* connect(Node* root) {
    if (!root) return root;

    Node* res = root;
    queue<Node*> q;
    q.push(root);
    vector<Node*> ans;
    // ans.push_back(root);

    while (!q.empty()) {
      int lvl = q.size();
      vector<Node*> ans;
      queue<Node*> temp = q;
      while (!temp.empty()) {
        ans.push_back(temp.front());
        temp.pop();
      }
      // ans.push_back(q);
      for (int i = 0; i < lvl; i++) {
        Node* curr = q.front();
        q.pop();

        if (i + 1 < lvl) {
          ans[i]->next = ans[i + 1];
        } else
          ans[i]->next = nullptr;

        if (curr->left) q.push(curr->left);

        if (curr->right) q.push(curr->right);
      }
    }
    return res;
  }
};