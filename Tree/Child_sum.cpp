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

bool check(Node* root) {
    if((root->left == NULL) && (root->right == NULL))
        return true;
    if(root!=NULL) {
        if((root->left == NULL && root->key == root->right->key) || (root->right==NULL && root->key != root->left->key))
            return false;
        
        if((root->left->key) + (root->right->key) != (root->key))
            return false;
        
        check(root->left);
        check(root->right);
    }
    return true;
}

int main() {
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->right->left =  new Node(3);
    root->right->right = new Node(9);

    cout<<check(root);
}