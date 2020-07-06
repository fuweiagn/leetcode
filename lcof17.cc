#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
using namespace std;

vector<int> printNumbers(int n);
int main() {

    return 0;
}
vector<int> printNumbers(int n) {
    vector<int> ret;
    int max = pow(10, n);

    for (int i = 1; i < max; i++) {
        ret.push_back(i);
    }

    return ret;
}