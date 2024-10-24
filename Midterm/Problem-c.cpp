#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, ST = 1;
    cin >> T;
    while ((314 * ST) + 4 < T)
    {
        ST++;
    }
    cout << ST;

    return 0;
}