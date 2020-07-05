#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <cassert>
using namespace std;

int movingCount(int m, int n, int k);
int count(int x);

int main() {

    return 0;
}

// digits sum helper
int count(int x) {
    int cnt = 0;

    while (x > 0) {
        cnt += x % 10;
        x /= 10;
    }

    return cnt;
}

void movingCount(int m, int n,
                int r, int c,
                int k, vector<vector<bool>>& visited) {
    if (r < 0 || r >= m ||
        c < 0 || c >= n ||
        count(r) + count(c) > k ||
        visited[r][c]) {
        return;
    }

    visited[r][c] = true;
    movingCount(m, n, r + 1, c, k, visited);
    movingCount(m, n, r, c + 1, k, visited);
}

int movingCount(int m, int n, int k) {
    vector<vector<bool>> visited;
    for (int i = 0; i < m; i++) {
        visited.push_back(vector<bool>(n, false));
    }

    movingCount(m, n, 0, 0, k, visited);

    int cnt = 0;
    for (const auto& vec : visited) {
        for (const auto& ret : vec) {
            if (ret) cnt++;
        }
    }

    return cnt;
}