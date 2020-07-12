#include "leetcode.hpp"

Node* copyRandomList(Node* head);
int main() {

    return 0;
}
Node* copyRandomList(Node* head) {
    unordered_map<Node*, Node*> m;
    Node* dummyHead = new Node(-1);
    Node* curr = dummyHead;

    while (head) {
        // value
        if (m.find(head) == m.end())
        { // not visited
            Node* newNode = new Node(head->val);
            m[head] = newNode;
            curr->next = newNode;
        }
        else
        { // visited
            curr->next = m[head];
        }
        curr = curr->next;

        // random pointer
        if (!head->random) {
            curr->random = nullptr;
        }
        else if (m.find(head->random) == m.end())
        {
            Node* newNode = new Node(head->random->val);
            m[head->random] = newNode;
            curr->random = newNode;
        }
        else
        {
            curr->random = m[head->random];
        }

        head = head->next;
    }

    return dummyHead->next;
}