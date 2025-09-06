// Given an array create a bst from it

// 6
//  9 8 5 4 0 1
#include <bits/stdc++.h>

using namespace std;
class Tree {
   public:
    int data;
    Tree* left;
    Tree* right;
    Tree(int data) {
        this->data = data;
        left = right = nullptr;
    }
};
Tree* construct(Tree*& root, int val) {
    if (!root) {
        Tree* node = new Tree(val);
        return node;
    }

    if (val < root->data) {
        root->left = construct(root->left, val);
    } else if (val > root->data) {
        root->right = construct(root->right, val);
    }
    return root;
}
void printTree(Tree* root) {
    if (!root) {
        return;
    }
    printTree(root->left);
    cout << root->data << " ";
    printTree(root->right);
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int& i : arr) cin >> i;

    Tree* root = nullptr;

    for (int i = 0; i < arr.size(); i++) {
        root = construct(root, arr[i]);
    }

    printTree(root);
}