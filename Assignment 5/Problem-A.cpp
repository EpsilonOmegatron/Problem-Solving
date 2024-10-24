#include <bits/stdc++.h>
using namespace std;
// Complaints

long long dfs(int u, int par, vector<vector<int>> &adj, int percent)
{
    if (adj[u].size() == 1 && par != -1)
    {
        return 1;
    }
    
    vector<int> solution;
    int under;
    if (par != -1)
    {
        under = adj[u].size() - 1;
    }
    else
    {
        under = adj[u].size();
    }
    
    int neededNum = ceil(under * percent / (double)100);
    for (int neig : adj[u])
    {
        if (neig == par)
        {
            continue;
        }
        solution.push_back(dfs(neig, u, adj, percent));
    }
    
    sort(solution.begin(), solution.end());
    int sum = 0;
    for (int i = 0; i < solution.size() && i < neededNum; ++i)
    {
        sum += solution[i];
    }
    return sum;
}

int main()
{

    int employeeNum, percent;
    while (cin >> employeeNum >> percent && employeeNum != 0 && percent != 0)
    {
        vector<vector<int>> adj;
        adj.resize(employeeNum + 1);

        for (int i = 1; i < employeeNum + 1; ++i)
        {
            int employee;
            cin >> employee;
            adj[employee].push_back(i);
            adj[i].push_back(employee);
        }

        cout << dfs(0, -1, adj, percent) << "\n";
    }
}