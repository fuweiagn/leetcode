#include "leetcode.hpp"

bool isSymmetric(TreeNode* root);

int main() {

    return 0;
}

bool isSymmetric(TreeNode* l, TreeNode* r) {
    if (!l && !r) return true;
    else if ((!l || !r) || l->val != r->val) return false;

    return isSymmetric(l->left, r->right) && isSymmetric(l->right, r->left);
}

bool isSymmetric(TreeNode* root) {
    if (!root) return true;

    return isSymmetric(root->left, root->right);
}