#include "leetcode.hpp"

int main()
{

    return 0;
}
vector<int> getLeastNumbers(vector<int> &arr, int k)
{
    priority_queue<int> q;
    vector<int> ret(k, 0);
    if (k == 0) return ret;

    for (int i = 0; i < k; i++)
    {
        q.push(arr[i]);
    }

    for (int i = k; i < arr.size(); i++)
    {
        if (q.top() > arr[i]) {
            q.pop();
            q.push(arr[i]);
        }
    }

    for (int i = 0; i < k; i++) {
        ret[i] = q.top();
        q.pop();
    }

    return ret;
}