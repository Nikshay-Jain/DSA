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

void nth_last(Node *head, int n) {
    Node *fast = head, *slow = head;
    int l = 0;
    while(l<n && fast!=NULL) {
        l++;
        fast = fast->next;
    }
    if(l<n)
        return;
    
    while(fast!=NULL) {
        fast = fast->next;
        slow = slow->next;
    }
    cout<<slow->data;
}

int main() {
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    int n = 3;
    nth_last(head, n);
}