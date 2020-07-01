#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s);
int main() {

    return 0;
}
int lengthOfLongestSubstring(string s) {
    if (s.length() < 2) return s.length();
    int l = 0;
    int r = 0;
    int maxLen = 0;
    int length = 0;
    unordered_map<char, int> map;

    while (r < s.length()) {
        char c = s[r];
        if (map.find(c) != map.end() && map[c] >= l) { // found
            l = map[c] + 1;
            length = r - l;
        }
        map[c] = r;

        r++;
        length++;
        maxLen = max(length, maxLen);
    }
    
    return maxLen;
}