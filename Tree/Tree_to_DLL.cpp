#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *left, *right;
    Node(int k) {
        key = k;
        left = right = NULL;
    }
};

Node *pre = NULL;

Node *tree_dll(Node *root) {
    if (root == NULL)
        return root;
    Node *head = tree_dll(root->left);

    if (pre == NULL)
        head = root;
    else {
        root->left = pre;
        pre->right = root;
    }
    pre = root;
    tree_dll(root->right);
    return head;
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    root->left->left = new Node(60);

    Node *head = tree_dll(root);
    cout<<head->key;
    return 0;
}