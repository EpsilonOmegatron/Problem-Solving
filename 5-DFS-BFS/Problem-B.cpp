#include <bits/stdc++.h>
using namespace std;
// Network

vector<vector<int>> adj;

int bfs(int src, int destination)
{
    int n = adj.size();
    const int INF = 1e9;
    vector<int> dist(n, INF);
    queue<int> q;
    q.push(src);
    dist[src] = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (dist[v] == INF)
            {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    return dist[destination] - 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cases;
    cin >> cases;
    while (cases--)
    {
        int people;
        cin >> people;
        adj.resize(people);
        for (int i = 0; i < people; i++)
        {
            int neighbors, friends, person;
            cin >> person >> neighbors;
            for (int i = 0; i < neighbors; i++)
            {
                cin >> friends;
                adj[person].push_back(friends);
            }
        }
        int src, dest;
        cin >> src >> dest;
        cout << src << " " << dest << " " << bfs(src, dest) << ((cases == 0) ? "\n" : "\n\n");
        adj.clear();
    }
    return 0;
}