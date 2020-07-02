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
    unordered_set<int> set;
    for (int i : nums) {
        if (set.find(i) != set.end()) {
            return i;
        }
        else {
            set.insert(i);
        }
    }
}