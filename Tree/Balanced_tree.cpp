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

int isBalanced(Node *root) {
    if(root==NULL)
        return 0;
    int lh = isBalanced(root->left);
    if(lh == -1)
        return -1;
    int rh = isBalanced(root->right);
    if(rh == -1)
        return -1;
    
    return ((abs(lh-rh)>1) ? -1 : 1+max(lh,rh));
}

int main() {
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->right->left =  new Node(3);
    root->right->right = new Node(9);

    cout<<isBalanced(root);
}