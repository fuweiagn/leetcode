#include "leetcode.hpp"

bool verifyPostorder(vector<int>& postorder);

int main() {

    return 0;
}

bool verifyPostorder(vector<int>& porder, int i, int j) {
    if (i >= j) return true;

    int m = i;
    while (porder[m] < porder[j]) {
        m++;
    }

    // check right subtree
    bool rightSubTreeIsValid = true;
    for (int k = m; k < j; k++) {
        if (porder[k] < porder[j]) {
            rightSubTreeIsValid = false;
            break;
        }
    }

    return rightSubTreeIsValid &&
            verifyPostorder(porder, i, m - 1) &&
            verifyPostorder(porder, m, j - 1);
}

bool verifyPostorder(vector<int>& postorder) {
    return verifyPostorder(postorder, 0, postorder.size() - 1);
}