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

// we don't have head given here
void del_node(Node *ptr) {
    if(ptr->next==NULL) {
        cout<<"NULL";
    }
    else {
        // copy the data of next node in pointed node and then set the next one as the one even next to that
        ptr->data = ptr->next->data;
        ptr->next = ptr->next->next;
        cout<<"New node at that location is: "<<ptr->data;
    }
}

int main() {
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    del_node(head->next->next->next);
}