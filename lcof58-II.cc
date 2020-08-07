#include "leetcode.hpp"

int main()
{
    return 0;
}
void reverse(string &s, int begin, int end)
{
    while (begin < end)
    {
        swap(s[begin], s[end]);
        begin++;
        end--;
    }
}
string reverseLeftWords(string s, int n)
{
    // time: O(N), space: O(N)
    string ret(s.begin() + n, s.end());
    ret += string(s.begin(), s.begin() + n);
    return ret;

// inplace
#ifdef INPLACE
    reverse(s, 0, n - 1);
    reverse(s, n, s.length() - 1);
    reverse(s, 0, s.length() - 1);
    return s;
#endif
}