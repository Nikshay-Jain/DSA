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

void rm_sorted(Node *head) {
    if(head==NULL)
        return;

    Node *curr = head;
    while(curr->next!=NULL) {
        if(curr->data == curr->next->data)
            curr->next = curr->next->next;
        else
            curr = curr->next;
    }
    for(curr = head; curr!=NULL; curr = curr->next)
        cout<<curr->data<<" ";
}

int main() {
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(20);
    head->next->next->next = new Node(30);
    head->next->next->next->next = new Node(30);
    head->next->next->next->next->next = new Node(30);
    head->next->next->next->next->next->next = new Node(30);
    head->next->next->next->next->next->next->next = new Node(40);
    rm_sorted(head);
}