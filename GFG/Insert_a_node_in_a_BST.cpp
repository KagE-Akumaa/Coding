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
    Node* newNode(Node* root, int key) {
        if (!root) {
            Node* n = new Node(key);
            return n;
        }

        if (key == root->data) {
            return root;
        }
        if (key < root->data) {
            root->left = newNode(root->left, key);
        } else
            root->right = newNode(root->right, key);

        return root;
    }
    Node* insert(Node* root, int key) {
        //  code  here
// Recursive appraoch
#if 0
        root = newNode(root, key);
        
        return root;
#endif

        // Iterative one
        if (!root) {
            Node* n = new Node(key);

            return n;
        }
        Node *temp = root, *p = nullptr;
        while (root) {
            if (key == root->data)
                return root;
            if (key < root->data) {
                p = root;
                root = root->left;
            } else {
                p = root;
                root = root->right;
            }
        }
        Node* n = new Node(key);

        if (key < p->data) {
            p->left = n;

        } else {
            p->right = n;
        }

        return temp;
    }
};