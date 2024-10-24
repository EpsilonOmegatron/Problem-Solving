#include <bits/stdc++.h>
using namespace std;
// Dividing Coins

int dp[101][50005];
int coins[101];
int coinNum;

int solve(int i, int person_1, int person_2)
{
    if (i == coinNum)
        return abs(person_1 - person_2);

    int &ret = dp[i][abs(person_1 - person_2)];

    if (~ret)
        return ret;

    ret = min(solve(i + 1, person_1 + coins[i], person_2), solve(i + 1, person_1, person_2 + coins[i]));

    return ret;
}

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        memset(dp, -1, sizeof(dp));
        cin >> coinNum;
        for (int i = 0; i < coinNum; i++)
        {
            cin >> coins[i];
        }
        cout << solve(0, 0, 0) << "\n";
    }
    return 0;
}