#include <bits/stdc++.h>
using namespace std;
// Rome Roads

map<string, vector<string>> adj;

void bfs(string src, string destination)
{
    deque<string> q;
    q.push_back(src);
    map<string, bool> vis;
    map<string, string> p;
    vis[src] = true;
    while (!q.empty())
    {
        string v = q.front();
        q.pop_front();
        for (const auto &u : adj[v])
        {
            if (!vis[u])
            {
                vis[u] = true;
                q.push_back(u);
                p[u] = v;
            }
        }
    }
    string path;
    string cur = destination;
    while (cur != src)
    {
        path += cur[0];
        cur = p[cur];
    }
    path += src[0];
    reverse(path.begin(), path.end());
    cout << path << "\n";
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
        int roadNum, queryNum;
        cin >> roadNum >> queryNum;
        string city, neighbor;
        for (int i = 0; i < roadNum; i++)
        {
            cin >> city >> neighbor;
            adj[city].push_back(neighbor);
            adj[neighbor].push_back(city);
        }
        string src, dest;
        while (queryNum--)
        {
            cin >> src >> dest;
            bfs(src, dest);
        }
        adj.clear();
        if (cases)
        {
            cout << "\n";
        }
    }
    return 0;
}