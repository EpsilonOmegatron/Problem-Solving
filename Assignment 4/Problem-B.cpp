#include <bits/stdc++.h>
using namespace std;
// Maze

vector<string> solution;

void traverse(string maze[], int row, string path, int currentLocation)
{

    if (path.empty())
    {
        return;
    }

    if (maze[row][currentLocation - 1] == path[0])
    {
        solution.push_back("left");
        path.erase(path.begin());
        currentLocation--;
        traverse(maze, row, path, currentLocation);
    }
    else if (maze[row][currentLocation + 1] == path[0])
    {
        solution.push_back("right");
        path.erase(path.begin());
        currentLocation++;
        traverse(maze, row, path, currentLocation);
    }
    else if (maze[row - 1][currentLocation] == path[0])
    {
        solution.push_back("forth");
        path.erase(path.begin());
        traverse(maze, row - 1, path, currentLocation);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cases;
    cin >> cases;
    while (cases--)
    {
        int rows, startLocation;
        cin >> rows >> startLocation;
        string maze[rows], path = "IEHOVA#";
        for (int i = 0; i < rows; i++)
        {
            cin >> maze[i];
            if (maze[i].find('@') != string::npos)
            {
                startLocation = maze[i].find('@');
            }
        }
        traverse(maze, rows - 1, path, startLocation);

        cout << solution[0];
        for (int i = 1; i < solution.size(); i++)
        {
            cout << " " << solution[i];
        }
        cout << "\n";
        solution.clear();
    }
    return 0;
}