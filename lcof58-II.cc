#include "leetcode.hpp"

int main()
{
    return 0;
}
string reverseLeftWords(string s, int n) {
    string ret(s.begin() + n, s.end());
    ret += string(s.begin(), s.begin() + n);
    return ret;
}