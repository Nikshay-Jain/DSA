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

Node *rev(Node *head) {
    if(head==NULL || head->next==NULL)
        return head;

    Node *curr = head, *prev = NULL, *next;
    while(curr!=NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool palin(Node *head) {
    if(head==NULL)
        return true;
    Node *slow = head, *fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *reversed = rev(slow->next);
    Node *curr = head;
    while (reversed!=NULL) {
        if(reversed->data != curr->data)
            return false;
        curr = curr->next;
        reversed = reversed->next;
    }
    return true;
}

int main() {
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(20);
    head->next->next->next->next = new Node(10);

    cout<<palin(head);
}