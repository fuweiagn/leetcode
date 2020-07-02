#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
using namespace std;

string replaceSpace(string s);
int main() {

    return 0;
}
string replaceSpace(string s) {
    string ret;
    
    for (char c : s) {
        if (c == ' ') {
            ret.append("%20");
        }
        else {
            ret.append(c, 1);
        }
    }

    return ret;
}