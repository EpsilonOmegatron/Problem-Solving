#include <bits/stdc++.h>
using namespace std;
// War

int fx8[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int fy8[] = {0, 1, 1, 1, 0, -1, -1, -1};

void dfs(int x, int y, vector<vector<int>> &grid, vector<vector<bool>> &vis)
{
    vis[x][y] = true;
    for (int i = 0; i < 8; i++)
    {
        int temp_x = x + fx8[i];
        int temp_y = y + fy8[i];

        if (temp_x < 0 || temp_x >= grid.size() || temp_y < 0 || temp_y >= grid[0].size() || vis[temp_x][temp_y] || grid[temp_x][temp_y] == 0)
        {
            continue;
        }
        dfs(temp_x, temp_y, grid, vis);
    }
}

int main()
{
    int cases, currentCase = 0;
    while (cin >> cases)
    {
        currentCase++;
        vector<vector<int>> grid(cases, vector<int>(cases, 0));
        vector<vector<bool>> vis(cases, vector<bool>(cases, false));
        vector<pair<int, int>> indexes;
        for (int i = 0; i < cases; i++)
        {
            string row;
            cin >> row;
            for (int j = 0; j < cases; j++)
            {
                grid[i][j] = row[j] - '0';
                if (grid[i][j])
                    indexes.push_back({i, j});
            }
        }
        
        int eagles = 0;
        for (auto coord : indexes)
        {
            if (!vis[coord.first][coord.second])
            {
                dfs(coord.first, coord.second, grid, vis);
                eagles++;
            }
        }

        cout << "Image number " << currentCase << " contains " << eagles << " war eagles.\n";
    }
    return 0;
}