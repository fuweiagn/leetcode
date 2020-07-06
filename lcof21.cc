#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

vector<int> exchange(vector<int>& nums);

int main() {

    return 0;
}

vector<int> exchange(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;
    while (left < right) {
        while (left < right && nums[left] % 2 == 1) left++;
        while (left < right && nums[right] % 2 == 0) right--;

        int tmp = nums[right];
        nums[right] = nums[left];
        nums[left] = tmp;
    }

    return nums;
}