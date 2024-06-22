#include<bits/stdc++.h>
using namespace std;

struct Node {
    Node *next;
    int data;
    bool visited;
    Node(int d) {
        next = NULL;
        data = d;
        visited = false;
    }
};

// modifies node structure with O(n) extra space
bool det_loop(Node *head) {
    Node *curr;
    for(curr=head;curr->next!=NULL;curr = curr->next) {
        if(curr->next->visited == true)
            return true;
        curr->visited = true;
    }
    return false;
}

// without modifying node structure with O(n) extra space
bool det_loop_hash(Node *head) {
    unordered_set<Node *> s;
    Node *curr = head;
    for(curr=head;curr!=NULL;curr = curr->next) {
        if(s.find(curr)!=s.end())
            return true;
        s.insert(curr);
    }
    return false;
}

// No extra space, no breakage of LL, no modification of Node str
bool det_loop_floyd_cycle(Node *head) {
    Node *slow = head, *fast = head;
    while(fast->next!=NULL && fast->next->next !=NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast)
            return true;
    }
    return false;
}

int main() {
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = head->next;

    cout<<det_loop(head)<<endl;
    cout<<det_loop_hash(head)<<endl;
    cout<<det_loop_floyd_cycle(head)<<endl;
}