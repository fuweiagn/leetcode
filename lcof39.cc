#include "leetcode.hpp"

int main() {

    return 0;
}
int majorityElement(vector<int>& nums) {
    int m;
    int sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (sum == 0) m = nums[i];
        sum += nums[i] == m ? 1 : -1;
    }

    return m;
}