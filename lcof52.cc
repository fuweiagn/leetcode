#include "leetcode.hpp"

int main()
{

    return 0;
}
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    ListNode *a = headA;
    ListNode *b = headB;

    while (a != b)
    {
        a = a != nullptr ? a->next : headB;
        b = b != nullptr ? b->next : headA;
    }

    return a;
}