#include "leetcode.hpp"

vector<int> spiralOrder(vector<vector<int>>& matrix);

int main() {

    return 0;
}

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    if (matrix.size() == 0) return {};
    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;
    vector<int> ret;

    while (true) {
        for (int i = left; i <= right; i++) {
            ret.push_back(matrix[top][i]);
        }
        if (++top > bottom) break;

        for (int i = top; i <= bottom; i++) {
            ret.push_back(matrix[i][right]);
        }
        if (--right < left) break;

        for (int i = right; i >= left; i--) {
            ret.push_back(matrix[bottom][i]);
        }
        if (--bottom < top) break;

        for (int i = bottom; i >= top; i--) {
            ret.push_back(matrix[i][left]);
        }
        if (++left > right) break;
    }

    return ret;
}