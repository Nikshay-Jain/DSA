#include<bits/stdc++.h>
using namespace std;

struct Node {
    Node *next;
    Node *random;
    int data;
    Node(int d) {
        next = NULL;
        random = NULL;
        data = d;
    }
};

// Time: O(n); Space: O(n)
void clone_with_random(Node *head) {
    unordered_map<Node*, Node*> m;
    Node *clone, *curr;
    for(curr = head; curr!=NULL; curr = curr->next)
        m[curr] = new Node(curr->data);
    
    for(curr = head; curr!=NULL; curr = curr->next) {
        clone = m.find(curr);
        clone->next = curr->next;
        clone->random = curr->random;
    }
    Node *head2 = m[head];
}

int main() {
    Node *head = new Node(10);
    Node *temp1 = new Node(5);
    Node *temp2 = new Node(20);
    Node *temp3 = new Node(15);
    Node *temp4 = new Node(20);

    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    temp3->next = temp4;

    head->random = temp2;
    temp1->random = temp3;
    temp2->random = head;
    temp3->random = temp2;
    temp4->random = temp3;

    clone_with_random(head);
}