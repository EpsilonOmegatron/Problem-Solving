#include <bits/stdc++.h>
using namespace std;
// Placing Queens

int n;
int grid[8][8];
int val[8][8];
int best_sum = INT_MIN;

bool valid(int r, int c)
{
    for (int i = 0; i < r; i++)
        if (grid[i][c] == 'Q')
            return 0;

    for (int i = r - 1, j = c + 1; i >= 0 && j < n; i--, j++)
        if (grid[i][j] == 'Q')
            return 0;

    for (int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--)
        if (grid[i][j] == 'Q')
            return 0;
    return 1;
}

int solve(int r, int sum)
{
    if (r == n)
    {
        return sum;
    }
    else
    {
        int res = 0;
        for (int c = 0; c < n; c++)
        {
            if (valid(r, c))
            {
                grid[r][c] = 'Q';
                res = max(res, solve(r + 1, sum + val[r][c]));
                grid[r][c] = '.';
            }
        }
        return res;
    }
}

int main()
{
    int cases;
    cin >> cases;

    while (cases--)
    {
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> val[i][j];
                grid[i][j] = '.';
            }
        }
        n = 8;
        cout << setw(5) << solve(0, 0) << "\n";
    }

    return 0;
}