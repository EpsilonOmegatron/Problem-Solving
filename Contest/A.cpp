#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        set<char> chars1, chars2;
        string S1, S2;
        cin >> S1 >> S2;
        bool substring = 0;
        for (int i = 0; i < S1.length(); i++)
        {
            chars1.insert(S1[i]);
        }
        for (int i = 0; i < S2.length(); i++)
        {
            chars2.insert(S2[i]);
        }
        for (auto i : chars1)
        {
            for (auto j : chars2)
            {
                if (i == j)
                {
                    substring = 1;
                    break;
                }
            }
            if (substring)
            {
                break;
            }
        }
        if (substring)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
