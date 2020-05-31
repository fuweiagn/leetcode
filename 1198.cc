#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;
int search(vector<int> &vec, int e, int lo, int hi);
int main() {
}
// An improved performance implementation of binary search for vector<int>.
// Return the index of the element that is the largest but not greater than
// the element that we want
int search(vector<int> &vec, int e, int lo, int hi) {
    while (lo < hi) {
        int mi = (lo + hi) / 2;
        (e < vec[mi]) ? hi = mi : lo = mi + 1;
    }
    return --lo;
}
int smallestCommonElement(vector<vector<int>>& mat) {
    // for each element of the first row,
    // determine whether it appears in other rows
    int rows = mat.size();
    int cols = mat[0].size();
    for (int ele : mat[0]) {
        int i = 1;
        for (; i < rows; i++) {
            int idx = search(mat[i], ele, 0, cols);
            if (idx == -1 || mat[i][idx] != ele) break;
        }
        if (i == rows) return ele;
    }
    return -1;
}