#include "leetcode.hpp"

TreeNode* mirrorTree(TreeNode* root);
int main() {

    return 0;
}
TreeNode* mirrorTree(TreeNode* root) {
    if (!root) return nullptr;

    TreeNode * tmp = root->left;
    root->left = mirrorTree(root->right);
    root->right = mirrorTree(tmp);

    return root;
}