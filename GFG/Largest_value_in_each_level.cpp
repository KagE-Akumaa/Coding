// User function Template for C++

class Solution {
 public:
  vector<int> largestValues(Node* root) {
    // code here
    if (!root) return {};

    vector<int> ans;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
      int lvl = q.size();
      int mval = 0;

      for (int i = 0; i < lvl; i++) {
        Node* curr = q.front();
        q.pop();

        mval = max(mval, curr->data);

        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
      }
      ans.push_back(mval);
    }

    return ans;
  }
};