#include "leetcode.hpp"

int main() {

    return 0;
}

void permutation(string soFar, string rest, int n, unordered_set<string>& set) {
    if (n == 0) set.insert(soFar);

    for (int i = 0; i < rest.length(); i++) {
        permutation(soFar + rest[i],
                    rest.substr(0, i) + rest.substr(i + 1, rest.length() - i - 1),
                    n - 1, set);
    }
}

vector<string> permutation(string s) {
    unordered_set<string> set;
    permutation("", s, s.length(), set);

    vector<string> ret;
    for (auto& s : set) {
        ret.push_back(s);
    }
    return ret;
}