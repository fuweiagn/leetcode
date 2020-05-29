#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>

int main() {

    return 0;
}
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    // two pointers
    int endOfRet = m + n - 1; // starting from end of result
    int tail1 = m - 1;        // tail of vector1
    int tail2 = n - 1;        // tail of vector2
    while (tail2 >= 0 && tail1 >= 0) {
        if (nums2[tail2] >= nums1[tail1]) {
            nums1[endOfRet] = nums2[tail2];
            tail2--;
        } else {
            nums1[endOfRet] = nums1[tail1];
            tail1--;
        }
        endOfRet--;
    }
    while (tail2 >= 0) {
        nums1[endOfRet--] = nums2[tail2--];
    }
}