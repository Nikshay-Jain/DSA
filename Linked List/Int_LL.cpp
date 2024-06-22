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

void inter_ll(Node *head1, Node *head2) {
    int i,c1=0,c2=0;
    Node *curr1, *curr2;
    for(curr1 = head1; curr1->next!=NULL; curr1 = curr1->next)
        c1++;
    for(curr2 = head2; curr2->next!=NULL; curr2 = curr2->next)
        c2++;

    int d = abs(c1-c2);
    curr1 = head1;
    curr2 = head2;

    // traverse bigger LL d no of times
    if(c1>c2) {
        for(i=0;i<d;i++)
            curr1 = curr1->next;
    }
    else {
        for(i=0;i<d;i++)
            curr2 = curr2->next;
    }

    //traverse together to find intersection
    while(curr1!=NULL && curr2!=NULL) {
        if(curr1==curr2) {
            cout<<curr1->data;
            break;
        }
        curr1 = curr1->next;
        curr2 = curr2->next;
    }
}

int main() {
    Node *head1 = new Node(50);
    head1->next = new Node(20);
    head1->next->next = new Node(45);
    head1->next->next->next = new Node(30);
    head1->next->next->next->next = new Node(10);

    Node *head2 = new Node(9);
    head2->next = new Node(18);
    head2->next->next = head1->next->next;

    inter_ll(head1, head2);
}