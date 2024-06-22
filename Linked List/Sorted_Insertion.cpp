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

void sorted_ins(Node *head, int x) {
    Node *curr = head, *temp = new Node(x);

    if(head==NULL) {
        cout<<x<<endl;
        return;
    }

    else if(head->data > x) {
        temp->next = head;
        cout<<temp->data<<" ";
    }

    else {
        while(curr->next!=NULL && curr->next->data < x)
            curr = curr->next;
        
        temp->next = curr->next;
        curr->next = temp;
    }
    
    for(curr = head; curr!=NULL; curr = curr->next)
        cout<<curr->data<<" ";
}

int main() {
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    int x = 25;
    sorted_ins(head, x);
}