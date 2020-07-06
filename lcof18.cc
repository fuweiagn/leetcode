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

ListNode* deleteNode(ListNode* head, int val);

int main() {

    return 0;
}

ListNode* deleteNode(ListNode* head, int val) {
    if (head) {
        struct ListNode *front = head;

        if (front->val == val) {
            return front->next;
        }

        struct ListNode *nodeToDel = front->next;
        while (nodeToDel && nodeToDel->val != val) {
            front = nodeToDel;
            nodeToDel = nodeToDel->next;
        }

        if (nodeToDel) front->next = nodeToDel->next;
    }

    return head;

}