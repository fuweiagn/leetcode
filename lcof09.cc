#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <stack>
using namespace std;


class CQueue {
public:
    CQueue() {

    }
    
    void appendTail(int value) {
        in.push(value);

    }
    
    int deleteHead() {
        if (out.empty()) {
            if (in.empty()) return -1;
            while (!in.empty()) {
                out.push(in.top());
                in.pop();
            }
        }

        int ret = out.top();
        out.pop();

        return ret;

    }

private:
    stack<int> in;
    stack<int> out;
    
};