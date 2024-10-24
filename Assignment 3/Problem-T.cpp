#include <bits/stdc++.h>
using namespace std;
// Laps

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int fast, slow;
    while (cin >> fast >> slow)
    {
        int fastd = 0, slowd = 0, lap = 1;
        while ((slowd - fastd) < fast)
        {
            lap++;
            fastd += fast;
            slowd += slow;
        }
        cout << lap << "\n";
    }
    return 0;
}