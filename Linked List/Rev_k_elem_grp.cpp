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

Node *rev(Node *head, int k) {
    Node *curr = head, *prev = NULL, *next;
    int c = 1;
    while(curr!=NULL && c<=k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        c++;
    }

    if(next!=NULL) {
        Node *rest_head = rev(next,k);
        head->next = rest_head; 
    }
    return prev;
}

int main() {
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    int k=3;

    Node *curr = rev(head,k);
    for(; curr!=NULL; curr = curr->next)
        cout<<curr->data<<" ";
}