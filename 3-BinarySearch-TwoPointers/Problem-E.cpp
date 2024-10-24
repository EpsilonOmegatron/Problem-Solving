#include <bits/stdc++.h>
using namespace std;
// Catching-Theives

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cityNum, Ahmed, theives = 0;
    cin >> cityNum >> Ahmed;

    int cities[cityNum];
    for (int i = 0; i < cityNum; i++)
    {
        cin >> cities[i];
    }

    if (cities[Ahmed - 1] == 1)
    {
        theives++;
    }

    for (int i = 1; i <= max(Ahmed - 1, cityNum - Ahmed); i++)
    {
        int left = Ahmed - i - 1, right = Ahmed + i - 1;
        if (left >= 0 && right < cityNum)
        {
            if (cities[left] == 1 && cities[right] == 1)
            {
                theives += 2;
            }
        }
        else if (left >= 0)
        {
            theives += cities[left];
        }
        else if (right < cityNum)
        {
            theives += cities[right];
        }
    }
    cout << theives;
    return 0;
}