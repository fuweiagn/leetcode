#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder);
int main() {

    return 0;
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    // empty tree
    if (preorder.empty()) return nullptr;

    unordered_map<int, int> inIdx;

    // record index of node in inorder vector
    for (int i = 0; i < inorder.size(); i++) {
        inIdx[inorder[i]] = i;
    }

    TreeNode *root = buildTree(preorder, 0, preorder.size(),
                inorder, 0, inorder.size(), inIdx);

    return root;
}

// startup
TreeNode *buildTree(vector<int>& pre, int preStart, int preEnd,
                    vector<int>& in, int inStart, int inEnd,
                    unordered_map<int, int>& inIdx) {

    // empty
    if (preStart + 1 > preEnd) return nullptr;

    int rootVal = pre[preStart];
    TreeNode *newRoot = new TreeNode(rootVal);
    // only 1 node
    if (preStart + 1 == preEnd) return newRoot;

    int rootIdxIn = inIdx[rootVal];
    int leftSize = rootIdxIn - inStart;
    int rightSize = inEnd - rootIdxIn - 1;

    newRoot->left = buildTree(pre, preStart + 1, preStart + 1 + leftSize,
                                in, inStart, inStart + leftSize,
                                inIdx);
    newRoot->right = buildTree(pre, preStart + 1 + leftSize,
                                preStart + 1 + leftSize + rightSize,
                                in, rootIdxIn + 1, inEnd, inIdx);

    return newRoot;
}