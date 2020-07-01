#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
int main() {

    return 0;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* l1h = l1;

    int carry = 0;
    while (l1->next && l2->next) {
        int sum = l1->val + l2->val + carry;
        int digit = sum % 10;
        carry = sum / 10;

        // just keep l1 as result
        l1->val = digit;

        l1 = l1->next;
        l2 = l2->next;
    }

    // rest
    if (!l1->next) {
        l1->next = l2->next;
    }

    int sum = l1->val + l2->val + carry;
    int digit = sum % 10;
    carry = sum / 10;
    l1->val = digit;

    while (carry) {
        if (l1->next) {
            int sum = l1->next->val + carry;
            int digit = sum % 10;
            carry = sum / 10;

            l1->next->val = digit;
            l1 = l1->next;
        }
        else {
            ListNode* newNode = new ListNode(carry);
            carry = 0;
            l1->next = newNode;
        }
    }

    return l1h;
}