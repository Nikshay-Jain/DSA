#include<bits/stdc++.h>
using namespace std;

struct Node {
    Node *next;
    int data;
    Node(int d) {
        next = NULL;
        data = d;
    }
};

void merge_sorted(Node *head1, Node *head2) {
    Node *curr;
    if(head1==NULL) {
        for(curr=head2; curr!=NULL; curr = curr->next)
            cout<<curr->data<<" ";
        return;
    }
    else if(head2==NULL) {
        for(curr=head1; curr!=NULL; curr = curr->next)
            cout<<curr->data<<" ";
        return;
    }

    Node *h,*t;
    if(head1->data <= head2->data) {
        h = t = head1;
        head1 = head1->next;
    }
    else {
        h = t = head2;
        head2 = head2->next;
    }

    while(head1!=NULL && head2!=NULL) {
        if(head1->data <= head2->data) {
            t->next = head1;
            t = head1;
            head1 = head1->next;
        }
        else {
            t->next = head2;
            t = head2;
            head2 = head2->next;
        }
    }
    if(head1==NULL)
        t->next = head2;
    else
        t->next = head1;
    
    for(curr=h; curr!=NULL; curr = curr->next)
        cout<<curr->data<<" ";
}

int main() {
    Node *head1 = new Node(10);
    head1->next = new Node(15);
    head1->next->next = new Node(20);
    head1->next->next->next = new Node(25);
    head1->next->next->next->next = new Node(25);

    Node *head2 = new Node(9);
    head2->next = new Node(18);

    merge_sorted(head1,head2);
}