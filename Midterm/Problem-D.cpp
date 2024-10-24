#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int tables, requests, capacity, index;
    string action;
    cin >> tables >> requests;

    map<int, int> capacities;
    for (int i = 1; i <= tables; i++)
    {
        cin >> capacity;
        capacities.insert({i, capacity});
    }

    for (int i = 0; i < requests; i++)
    {
        cin >> action;
        if (action == "reserve")
        {
            for (auto i : capacities)
            {
                if (i.second != 0)
                {
                    cout << i.first << "\n";
                    capacities[i.first]--;
                    break;
                }
            }
        }
        else if (action == "cancel")
        {
            cin >> index;
            capacities[index]++;
        }
    }

    return 0;
}