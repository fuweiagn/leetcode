#include "leetcode.hpp"

bool isSubStructure(TreeNode* A, TreeNode* B);
int main() {

    return 0;
}
bool isSub(TreeNode* A, TreeNode* B) {
    if (!B) return true;
    if (!A || A->val != B->val) return false;
    return isSub(A->left, B->left) && isSub(A->right, B->right);
}

bool isSubStructure(TreeNode* A, TreeNode* B) {
    if (!A || !B) return false;

    return isSub(A, B) ||
    isSubStructure(A->left, B) ||
    isSubStructure(A->right, B);
}