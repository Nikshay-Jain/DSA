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

void inorder(Node *root) {
    if(root!=NULL) {
        inorder(root->left);
        cout<<(root->key)<<" ";
        inorder(root->right);
    }
}

void preorder(Node *root) {
    if(root!=NULL) {
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node *root) {
    if(root!=NULL) {
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" ";
    }
}

int height(Node *root) {
    if(root==NULL)
        return 0;
    else
        return max(height(root->left), height(root->right)) + 1;
}

void nodes_at_k(Node *root, int k) {
    if(root==NULL)
        return;

    else if(k==0)
        cout<<root->key<<" ";

    else {
        nodes_at_k(root->left, k-1);
        nodes_at_k(root->right, k-1);
    }
}

void levelorder(Node *root) {
    if(root==NULL)
        return;
    queue <Node*> q;
    q.push(root);

    while(q.empty()==false) {
        Node *curr = q.front();
        q.pop();
        cout<<curr->key<<" ";

        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
    }
}

void levelorder_linewise(Node *root) {
    if(root==NULL)
        return;
    queue <Node*> q;
    q.push(root);
    q.push(NULL);
    while(q.empty()==false) {
        Node *curr = q.front();
        q.pop();
        if(curr==NULL) {
            cout<<"\n";
            q.push(NULL);
            continue;
        }
        cout<<curr->key<<" ";
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
    }
}

int main() {
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left =  new Node(40);
    root->right->right = new Node(50);
    
    cout<<"Inorder: "<<endl;
    inorder(root);
    cout<<"\n\nPreorder: "<<endl;
    preorder(root);
    cout<<"\n\nPostorder: "<<endl;
    postorder(root);
    cout<<"\n\nLevel order traversal:"<<endl;
    levelorder(root);
    cout<<"\n\nLevel order traversal linewise:"<<endl;
    levelorder_linewise(root);

    cout<<"\n\nHeight of tree is:\n"<<height(root)<<endl;
    cout<<"\nEnter height for which you want nodes to be printed"<<endl;
    int k;
    cin>>k;
    cout<<"Nodes at given length: "<<endl;
    nodes_at_k(root,k);
}