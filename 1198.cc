#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;
int search(vector<int> &vec, int e, int lo, int hi);
int main() {
}
// an simple implementation of binary search for vector<int>
int search(vector<int> &vec, int e, int lo, int hi) {
    while (lo < hi) {
        // avoid over flow
        int mid = (lo + hi) / 2;
        if (e < vec[mid]) {
            hi = mid;
        }
        else if (vec[mid] < e) {
            lo = mid + 1;
        }
        else return mid;
    }
    return -1;
}
int smallestCommonElement(vector<vector<int>>& mat) {
    // for each element of the first row,
    // determine whether it appears in other rows
    int rows = mat.size();
    int cols = mat[0].size();
    for (int ele : mat[0]) {
        int i = 1;
        for (; i < rows; i++) {
            if (search(mat[i], ele, 0, cols) == -1) {
                break;
            }
        }
        if (i == rows) return ele;
    }
    return -1;
}