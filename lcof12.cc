#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool exist(vector<vector<char>>& board, string word);
bool dfs(vector<vector<char>>& board, int r, int c, string& word, int idx);

int main() {

    return 0;
}

bool exist(vector<vector<char>>& board, string word) {
    for (int r = 0; r < board.size(); r++) {
        for (int c = 0; c < board[0].size(); c++) {
                if (dfs(board, r, c, word, 0)) return true;
        }
    }

    return false;
}

// helper
bool inbound(vector<vector<char>>& board, int r, int c) {
    return r >= 0 && r < board.size() && c >=0 && c < board[0].size();
}


bool dfs(vector<vector<char>>& board, int r, int c, string& word, int idx) {
    if (!inbound(board, r, c) || board[r][c] == '/' || board[r][c] != word[idx]) {
        return false;
    } 
    if (idx == word.length() - 1) return true;

    // choose
    char tmp = board[r][c];
    board[r][c] = '/';

    int ret = 
    dfs(board, r + 1, c, word, idx + 1) ||
    dfs(board, r, c + 1, word, idx + 1) ||
    dfs(board, r - 1, c, word, idx + 1) ||
    dfs(board, r, c - 1, word, idx + 1);

    // unchoose
    board[r][c] = tmp;

    return ret;
}