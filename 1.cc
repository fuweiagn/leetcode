#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <set>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target);
int main() {

    return 0;
}
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++) {
        int n = nums[i];
        int anotherNum = target - n;
        if (map.find(anotherNum) != map.end()) {
            return {map[anotherNum], i};
        }
        map[n] = i;
    }
    return {};
}
    