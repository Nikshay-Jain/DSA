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
void clone_with_hashmap(Node *head) {
    unordered_map<Node*, Node*> m;
    Node *clone, *curr;
    for(curr = head; curr!=NULL; curr = curr->next)
        m[curr] = new Node(curr->data);
    
    for(curr = head; curr!=NULL; curr = curr->next) {
        clone = m[curr];
        clone->next = curr->next;
        clone->random = curr->random;
    }
    Node *head2 = m[head];
    cout<<"Random node from head: "<<head2->random->data<<endl;
}

// Time: O(n); Space: O(1)
void clone_dupl_nodes(Node *head) {
    if (!head) return;  // Check if head is NULL
    
    // Step 1: Create duplicate nodes adjacently
    Node *curr1 = head, *copy;
    while (curr1 != NULL) {
        Node *next1 = curr1->next;
        copy = new Node(curr1->data);
        curr1->next = copy;
        copy->next = next1;
        curr1 = next1;
    }
    
    // Step 2: Connect randoms
    curr1 = head;
    while (curr1 != NULL) {
        if (curr1->next)
            curr1->next->random = (curr1->random != NULL) ? curr1->random->next : NULL;
        curr1 = curr1->next->next;
    }
        
    // Step 3: Separate the cloned list from the original list
    curr1 = head;
    Node *head2 = head->next;
    Node *curr2 = head2;
    while (curr1 != NULL) {
        curr1->next = curr1->next ? curr1->next->next : NULL;
        curr2->next = curr2->next ? curr2->next->next : NULL;
        curr1 = curr1->next;
        curr2 = curr2->next;
    }

    // Step 4: Print the cloned list to verify
    curr2 = head2;
    while(curr2 != NULL) {
        cout<<curr2->data<<" ";
        curr2 = curr2->next;
    }
    cout << endl;
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

    clone_with_hashmap(head);
    clone_dupl_nodes(head);
}