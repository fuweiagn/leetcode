#include "leetcode.hpp"

int main()
{

    return 0;
}
int maxDepth(TreeNode *root)
{
    if (!root)
        return 0;

    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}
bool isBalanced(TreeNode *root)
{
    if (!root)
        return true;

    if (abs((maxDepth(root->left) - maxDepth(root->right))) > 1)
    {
        return false;
    }

    return isBalanced(root->left) && isBalanced(root->right);
}