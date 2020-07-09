#include "leetcode.hpp"

vector<vector<int>> pathSum(TreeNode* root, int sum);
int main() {

    return 0;
}

int sumOfVec(vector<int>& vec) {
    int sum = 0;

    for (int val : vec) sum += val;

    return sum;
}

void pathSum(TreeNode* root,
             vector<vector<int>>& paths, vector<int>& path, int target) {
    int rootVal = root->val;
    path.push_back(rootVal);
    target -= rootVal;
    if (!root->left && !root->right && target == 0) {
        paths.push_back(path);
    }
    else
    {
        if (root->left) {
            pathSum(root->left, paths, path, target);
            path.pop_back();
        }
        if (root->right) {
            pathSum(root->right, paths, path, target);
            path.pop_back();
        }
    }
}
vector<vector<int>> pathSum(TreeNode* root, int sum) {
    vector<vector<int>> paths;
    vector<int> path;

    if (root) {
        pathSum(root, paths, path, sum);
    }

    return paths;
}