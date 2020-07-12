#include "leetcode.hpp"

int main() {

    return 0;
}
Node* treeToDoublyList(Node* root) {
    if (!root) return nullptr;
    stack<Node*> s;
    Node* head = nullptr;
    Node* prev = new Node(-1);
    Node* curr = nullptr;

    while (true) {
        while (root) {
            s.push(root);
            root = root->left;
        }
        if (s.empty()) break;

        curr = s.top();
        s.pop();
        if (!head) head = curr;

        // link two nodes
        prev->right = curr;
        curr->left = prev;
        prev = curr;

        root = curr->right;
    }

    // link head and tail
    head->left = curr;
    curr->right = head;
    
    return head;
}