#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s);
int main() {

    return 0;
}
int lengthOfLongestSubstring(string s) {
    int maxLen = 0;
    for (int i = 0; i < s.length(); i++) {
        unordered_set<char> set;
        set.insert(s[i]);
        for (int j = i + 1; j < s.length(); j++) {
            char c = s[j];
            if (set.find(c) != set.end()) break;
            else {
                set.insert(c);
            }
        }
        if (set.size() > maxLen) maxLen = set.size();
    }
    return maxLen;
}