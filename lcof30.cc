#include "leetcode.hpp"

int main() {

    return 0;
}
class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {

    }
    
    void push(int x) {
        elements.push(x);
        if (mins.empty() || mins.top() >= x) mins.push(x);
    }
    
    void pop() {
        if (elements.empty()) return;

        if (elements.top() == mins.top()) {
            mins.pop();
        }
        elements.pop();
    }
    
    int top() {
        if (elements.empty()) return NULL;

        return elements.top();
    }
    
    int min() {
        if (mins.empty()) return NULL;

        return mins.top();
    }

private:
    stack<int> elements;
    stack<int> mins;
};