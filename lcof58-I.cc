#include "leetcode.hpp"

string reverseWords(string s);
int main()
{
    string ret = reverseWords("the sky is blue");
    return 0;
}
string reverseWords(string s)
{
    stack<string> words;
    stringstream ss;
    string word;

    ss << s;
    while (ss >> word)
    {
        words.push(word);
    }
    if (words.empty())
        return "";

    // while (start!= s.cend())
    // {
    //     while (isspace(*start))
    //         ++start;
    //     while (isspace(*end))
    //         ++end;

    //     while (!isspace(*end) && end != s.cend())
    //     {
    //         ++end;
    //     }
    //     words.emplace(start, end);
    //     while (isspace(*end))
    //         ++end;
    //     start = end;
    // }

    string ret;
    while (!words.empty())
    {
        ret += words.top();
        ret += " ";
        words.pop();
    }
    ret.erase(ret.end() - 1);
    return ret;
}