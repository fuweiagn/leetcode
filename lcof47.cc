#include "leetcode.hpp"

int main()
{

    return 0;
}
int maxValue(vector<vector<int>> &grid)
{
    /*
     * if grid is very large
     * 
    int m = grid.size();
    int n = grid[0].size();

    for (int i = 1; i < m; i++)
    {
        grid[i][0] += grid[i - 1][0];
    }

    for (int j = 1; j < n; j++)
    {
        grid[0][j] += grid[0][j - 1];
    }

    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            grid[i][j] += max(grid[i - 1][j], grid[i][j - 1]);
        }
    }

    return grid[m - 1][n - 1];
    */
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (i == 0 && j == 0)
                continue;
            else if (i == 0)
                grid[i][j] = grid[i][j - 1] + grid[i][j];
            else if (j == 0)
                grid[i][j] = grid[i - 1][j] + grid[i][j];
            else
                grid[i][j] = max(grid[i - 1][j], grid[i][j - 1]) + grid[i][j];
        }
    }

    return grid[grid.size() - 1][grid[0].size() - 1];
}