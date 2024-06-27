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

int preidx = 0;
Node *tree(int in[], int pre[], int is, int ie) {
    if (is > ie)
        return NULL;
    Node *root = new Node(pre[preidx++]);

    int inidx, i;
    for (i = is; i <= ie; i++) {
        if (in[i] == root->key) {
            inidx = i;
            break;
        }
    }
    root->left = (tree(in, pre, is, inidx - 1));
    root->right = (tree(in, pre, inidx + 1, ie));
    return root;
}

int main() {
    int in[] = {40, 20, 50, 10, 30, 80, 70, 90};
    int pre[] = {10, 20, 40, 50, 30, 70, 80, 90};
    
    Node *root = tree(in, pre, 0, 7);
    
    if (root != NULL)
        cout<<root->key<<endl;
    else
        cout<<"Tree is empty."<<endl;

    return 0;
}