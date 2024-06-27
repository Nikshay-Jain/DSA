#include<bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node *left, *right;
    Node(int k) {
        key = k;
        left = right = NULL;
    }
};

// consider complete binary tree
int res = 0;
int count_nodes(Node *root) {
    if(root==NULL)
        return 0;

    int cl=0,cr=0;
    Node *curr = root;
    while(curr!=NULL) {
        cl++;
        curr = curr->left;
    }
    curr = root;
    while(curr!=NULL) {
        cr++;
        curr = curr->right;
    }

    if(cl==cr)
        return (pow(2,cl)-1);

    return (1 + count_nodes(root->left) + count_nodes(root->right));
}

int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left =  new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right =  new Node(7);

    root->left->left->left =  new Node(8);
    root->left->left->right =  new Node(9);
    root->left->right->left =  new Node(10);
    root->left->right->right =  new Node(11);
    root->right->left->left =  new Node(12);
    root->right->left->right =  new Node(13);

    cout<<count_nodes(root);
}