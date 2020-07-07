#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseList(ListNode* head);
int main() {

    return 0;
}
ListNode* reverseList(ListNode* head) {
    struct ListNode *current = nullptr;
    struct ListNode *front = head;

    while (front) {
        ListNode *tmp = front->next;
        front->next = current;
        current = front;
        front = tmp;
    }

    return current;
}