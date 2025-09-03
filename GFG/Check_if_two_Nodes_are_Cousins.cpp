/*Complete the function below
Node is as follows:
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
 public:
  // Function to check if two nodes are cousins in a tree
  bool isCousins(Node* root, int a, int b) {
    // write code here
    if (!root) return false;
    if (a == b) return false;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
      int sz = q.size();
      int parentA = -1, parentB = -1;
      bool foundA = false, foundB = false;

      for (int i = 0; i < sz; ++i) {
        Node* cur = q.front();
        q.pop();

        if (cur->left) {
          if (cur->left->data == a) {
            foundA = true;
            parentA = cur->data;
          }
          if (cur->left->data == b) {
            foundB = true;
            parentB = cur->data;
          }
          q.push(cur->left);
        }
        if (cur->right) {
          if (cur->right->data == a) {
            foundA = true;
            parentA = cur->data;
          }
          if (cur->right->data == b) {
            foundB = true;
            parentB = cur->data;
          }
          q.push(cur->right);
        }
      }

      // After processing the whole level:
      if (foundA && foundB)
        return parentA != parentB;  // same level, different parents -> cousins
      if (foundA || foundB)
        return false;  // found only one -> different levels -> not cousins
    }

    return false;  // not found both
  }
};