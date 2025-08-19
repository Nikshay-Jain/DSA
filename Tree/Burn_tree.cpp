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

int res = 0;

int burn(Node *root, int leaf, int &dist) {
    if(root==NULL)
        return 0;
    if(root->key == leaf) {
        dist = 0;
        return 1;
    }
    int ldist=-1, rdist=-1;
    int lh = burn(root->left,leaf,ldist);
    int rh = burn(root->right,leaf,rdist);
    if(ldist!=-1) {
        dist = ldist + 1;
        res = max(res, dist + rh);
    }
    else if(rdist!=-1) {
        dist = rdist + 1;
        res = max(res, dist + lh);
    }
    return max(lh,rh)+1;
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

    int dist = 0;
    burn(root, root->left->right->right->key, dist);
    cout<<res;
}