#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void rev(Node *head) {
    if(head==NULL)
        return;
    else if(head->next==NULL) {
        cout<<head->data<<" ";
        return;
    }

    Node *curr = head, *prev = NULL, *next;
    while(curr!=NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    for(curr = prev; curr!=NULL; curr = curr->next)
        cout<<curr->data<<" ";
}

Node *recRev(Node *curr, Node *prev) {
    if(curr==NULL)
        return prev;
    Node *next = curr->next;
    curr->next = prev;
    recRev(next, curr);
}

int main() {
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    rev(head);
    cout<<endl;
    cout<<"Head of recursively reversed LL is: "<<recRev(head,NULL)->data;
}