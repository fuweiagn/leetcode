#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_set>
using namespace std;

int findRepeatNumber(vector<int>& nums);
int main() {

    return 0;
}
int findRepeatNumber(vector<int>& nums) {
    vector<int> count(nums.size(), 0);
    for (int n : nums) {
        if (count[n] > 0) {
            return n;
        }
        else {
            count[n]++;
        }
    }
    return 0;
}