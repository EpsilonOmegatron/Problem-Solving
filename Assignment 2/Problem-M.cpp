#include <bits/stdc++.h>
using namespace std;
// Automatic-Cheater-Detection

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cases, questions;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        cin >> questions;
        unordered_map<int, int> leakedSolved, notLeakednotSolved;
        for (int i = 0; i < questions; i++)
        {
            int d, s;
            char r;
            cin >> d >> s >> r;
            if (s == 1 && r == 'c')
            {
                leakedSolved[d]++;
            }
            if (s == 0 && r == 'i')
            {
                notLeakednotSolved[d]++;
            }
        }
        int sus = 0;
        if (!leakedSolved.empty() && !notLeakednotSolved.empty())
        {
            for (auto i : leakedSolved)
            {
                for (auto j : notLeakednotSolved)
                {
                    if (i > j)
                    {
                        sus += i.second * j.second;
                    }
                }
            }
        }
        cout << sus << "\n";
    }

    return 0;
}