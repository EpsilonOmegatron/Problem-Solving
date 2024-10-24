#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, T, maxPoints, bStart, bEnd;
    cin >> n >> T;
    int eTimes[n], ePoints[n];
    for (int i = 0; i < n; i++)
    {
        cin >> eTimes[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> ePoints[i];
    }

    int S = 0, E = 0, sum = 0;
    while (S < n)
    {
        if (eTimes[S] + eTimes[E] > T)
        {
            E++;
        }
        if (ePoints[S] + ePoints[E] > maxPoints && eTimes[S] + eTimes[E] < T)
        {
            bStart = S;
            bEnd = E;
            maxPoints = ePoints[S] + ePoints[E];
            E++;
        }
        S++;
    }
    cout << bStart << " " << bEnd;
    return 0;
}