#include "leetcode.hpp"

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
int main() {

    return 0;
}
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    // dummy head
    struct ListNode* head = new ListNode(-1);
    struct ListNode* curr = head;

    while (l1 && l2) {
        if (l1->val <= l2->val) {
            curr->next = l1;
            l1 = l1->next;
        } else {
            curr->next = l2;
            l2 = l2->next;
        }
        curr = curr->next;
    }

    if (l1) {
        curr->next = l1;
    } else {
        curr->next = l2;
    }

    return head->next;
}