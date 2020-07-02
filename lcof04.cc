#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

bool findNumberIn2DArray(vector<vector<int>>& matrix, int target);
int main() {

    return 0;
}
int search(vector<int> &vec, int e, int lo, int hi) {
    while (lo < hi) {
        int mi = (lo + hi) / 2;
        (e < vec[mi]) ? hi = mi : lo = mi + 1;
    }
    return --lo;
}
bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int cols;
    if (rows > 0) {
        cols = matrix[0].size();
    } else return false;

    for (int i = 0; i < rows; i++) {
        for (int j = cols - 1; j >= 0; j--) {
            int num = matrix[i][j];
            if (target == num) return true;
            else if (target < num) continue;
            else break;
        }
    }

    return false;
}