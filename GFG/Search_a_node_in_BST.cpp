/*
struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/
bool search(Node* root, int x) {
    // Your code here
    if (!root)
        return false;
    if (root->data == x) {
        return true;
    }
    while (root) {
        if (root->data == x) {
            return true;
        }
        if (x < root->data) {
            root = root->left;
        } else
            root = root->right;
    }
    return false;
}