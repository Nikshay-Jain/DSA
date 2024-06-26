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

int maxlevel = 0;
void leftview_rec(Node *root, int level) {
    if(root==NULL)
        return;
    else if(maxlevel<level) {
        cout<<root->key<<" ";
        maxlevel = level;
    }
    leftview_rec(root->left,level + 1);
    leftview_rec(root->right,level + 1);
}

void leftview_itr(Node *root) {
    if(root==NULL)
        return;
    queue <Node*> q;
    q.push(root);

    int count, i;
    while(q.empty()==false) {
        count = q.size();

        for(i=0;i<count;i++) {
            Node *curr = q.front();
            q.pop();

            if(i==0)
                cout<<curr->key<<" ";
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
    }
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left =  new Node(40);
    root->right->right = new Node(50);

    cout<<"Left view traversal by recursive algo"<<endl;
    leftview_rec(root,1);
    cout<<"\n\nLeft view traversal by iterative algo"<<endl;
    leftview_itr(root);
}