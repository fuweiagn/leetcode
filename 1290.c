#include <stdio.h>
#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode *next;
};
int getDecimalValue(struct ListNode* head);
int main(int argc, char *argv[])
{
    
    return 0;
}
int getDecimalValue(struct ListNode* head){
    int result = head->val;
    struct ListNode *n = head->next;
    while (n != NULL)
    {
        result = result * 2 + n->val;
        n = n->next;
    }
    return result;
}