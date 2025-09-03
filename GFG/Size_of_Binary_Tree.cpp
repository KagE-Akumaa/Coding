/*

Definition for Binary Tree Node
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
    int getSize(Node* root) {
        // code here
        if (!root)
            return 0;

        int c = 0;
        queue<Node*> q;
        q.push(root);

        while (!q.empty()) {
            int lvl = q.size();
            c += lvl;
            for (int i = 0; i < lvl; i++) {
                Node* t = q.front();
                q.pop();
                if (t->left)
                    q.push(t->left);

                if (t->right)
                    q.push(t->right);
            }
        }

        return c;
    }
};