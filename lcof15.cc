#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int hammingWeight(uint32_t n);

int main() {

    return 0;
}

int hammingWeight(uint32_t n) {
    int cnt = 0;
    int mask = 1;

    for (int i = 0; i < 32; i++, n >>= 1) {
        if (n & mask) {
            cnt++;
        }
    }

    return cnt;
}