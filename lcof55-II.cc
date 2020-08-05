#include "leetcode.hpp"

int main()
{

    return 0;
}
// return negative integer if subtree is not balanced or a postive depth
int depth(TreeNode *root)
{
    if (!root)
        return 0;

    int left = depth(root->left);
    if (left < 0)
        return -1;
    int right = depth(root->right);
    if (right < 0)
        return -1;

    if (abs(left - right) > 1)
    {
        return -1;
    }
    else
    {
        return max(left, right) + 1;
    }
}

bool isBalanced(TreeNode *root)
{
    if (depth(root) < 0)
    {
        return false;
    }

    return true;
}