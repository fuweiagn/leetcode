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
    int list[30] = {0};
    int i = 0;
    while (head != NULL)
    {
        list[i] = head->val;
        head = head->next;
        ++i;
    }
    i -= 2;
    int result = 0;
    for(int j = i, k = 0; j > -1; --j, ++k)
    {
        result += (list[j] * (2 << k));
    }
    result += (list[i+1] * 1);
    return result;
}