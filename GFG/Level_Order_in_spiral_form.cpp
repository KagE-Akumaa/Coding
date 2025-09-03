/* A binary tree node has data, pointer to left child
   and a pointer to right child
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */
class Solution {
 public:
  vector<int> findSpiral(Node* root) {
    // code here
    if (!root) return {};

    vector<int> ans;

    queue<Node*> q;
    bool odd = true;
    q.push(root);
    int c = 0;
    while (!q.empty()) {
      int lvl = q.size();
      vector<int> res(lvl);
      int n = res.size() - 1;
      for (int i = 0; i < lvl; i++) {
        if (c == 0 || c == 1) {
          odd = true;
        }
        Node* curr = q.front();
        q.pop();
        if (!odd) {
          res[n] = curr->data;
          n--;
        } else {
          res[i] = curr->data;
        }

        if (curr->left) q.push(curr->left);
        if (curr->right) q.push(curr->right);
      }
      c++;
      ans.insert(ans.end(), res.begin(), res.end());
      odd = !odd;
    }

    return ans;
  }
};