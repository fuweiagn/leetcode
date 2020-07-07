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
ListNode* getKthFromEnd(ListNode* head, int k);
int main() {

    return 0;
}
ListNode* getKthFromEnd(ListNode* head, int k) {
    struct ListNode *kNode = head;
    struct ListNode *front = kNode;

    if (head) {
        for (int i = 0; i < k - 1; i++) {
            if (!front) return nullptr;
            front = front->next;
        }

        while (front->next) {
            front = front->next;
            kNode = kNode->next;
        }

    }

    return kNode;
}