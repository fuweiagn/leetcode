#include "leetcode.hpp"

int main()
{

    return 0;
}
int kthLargest(TreeNode *root, int k)
{
    // reverse in-order traversal
    stack<TreeNode *> s;
    while (true)
    {
        // go along right branch
        while (root)
        {
            s.push(root);
            root = root->right;
        }
        // finished
        if (s.empty())
        {
            break;
        }

        root = s.top();
        if (--k == 0) {
            return root->val;
        }
        s.pop();
        root = root->left;
    }

    return 0;
}