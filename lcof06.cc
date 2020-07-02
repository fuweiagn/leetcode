#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

vector<int> reversePrint(ListNode* head);
int main() {

    return 0;
}

vector<int> reversePrint(ListNode* head) {
    vector<int> ret;

    while(head) {
        ret.push_back(head->val);
        head = head->next;
    }

    // swap
    for (int i = 0; i < ret.size()/2; i++) {
        swap(ret[i], ret[ret.size() - 1 - i]);
    }
    return ret;
}