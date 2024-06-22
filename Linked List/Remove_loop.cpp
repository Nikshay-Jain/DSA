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

// Floyd cycle algo then move slow to beginning and start fast & slow with same speed to intersect at 1st end of loop.
// So, set *prev to the prev node of fast to keep a track of that and set its next to null.
void remove_loop(Node *head) {
    Node *slow = head, *fast = head, *prev;
    while(fast!=NULL && fast->next !=NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast) {
            slow = head;
            while(fast!=NULL && fast->next !=NULL) {
                prev = fast;
                slow = slow->next;
                fast = fast->next;
                if(slow==fast) {
                    prev->next = NULL;
                    break;
                }
            }
            break;
        }
    }
    Node *curr;
    for(curr = head; curr!=NULL; curr = curr->next)
        cout<<curr->data<<" ";
}

int main() {
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head->next;

    remove_loop(head);
}