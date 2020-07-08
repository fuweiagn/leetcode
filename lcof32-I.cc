#include "leetcode.hpp"

vector<int> levelOrder(TreeNode* root);
int main() {

    return 0;
}
vector<int> levelOrder(TreeNode* root) {
    if (!root) return {};

    queue<TreeNode*> nodes;
    vector<int> ret;

    nodes.push(root);
    while (!nodes.empty()) {
        TreeNode* node = nodes.front();
        nodes.pop();
        ret.push_back(node->val);
        if (node->left) nodes.push(node->left);
        if (node->right) nodes.push(node->right);
    }

    return ret;
}