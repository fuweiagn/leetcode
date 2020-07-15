#include "leetcode.hpp"

int main()
{

    return 0;
}
int lengthOfLongestSubstring(string s)
{
    unordered_map<char, int> map;
    int l = 0;
    int r = 0;
    int maxLen = 0;

    while (r < s.length())
    {
        char c = s[r];
        if (map.find(c) != map.end() && map[c] >= l)
        {
            l = map[c] + 1;
        }

        map[c] = r;
        maxLen = max(maxLen, r - l + 1);
        r++;
    }

    return maxLen;
}