#include "leetcode.hpp"

int main() {

    return 0;
}

class MedianFinder {
public:
    /** initialize your data structure here. */
    MedianFinder(){

    }
    
    void addNum(int num) {
        if (left.size() == right.size()) { // insert to left, and pop a element to right
            left.push(num);
            right.push(left.top());
            left.pop();
        } else {
            right.push(num);
            left.push(right.top());
            right.pop();
        } 

    }
    
    double findMedian() {
        if (left.size() == right.size()) {
            return (left.top() + (right.top())) / 2.0;
        } else {
            return right.top();
        }

    }

private:
    priority_queue<int, vector<int>, greater<int>> left; // maxHeap, storing smaller elements
    priority_queue<int> right; // minHeap, storing bigger elements
};