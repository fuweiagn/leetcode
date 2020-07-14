#include "leetcode.hpp"

int main() {

    return 0;
}
int majorityElement(vector<int>& nums) {
    unordered_map<int, int> map;
    int size = nums.size();

    for (int n : nums) {
        int& cnt = map[n];
        cnt++;
        if (cnt > size / 2) return n;
    }

    return -1;
}