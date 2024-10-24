#include <bits/stdc++.h>
using namespace std;
// Knapsack

const int N = 2e3 + 5;
int dp[N][N];

int solve(int i, int rem, vector<int> &weight, vector<int> &values)
{
    if (!i || !rem)
    {
        return 0;
    }

    int &ret = dp[i][rem];

    if (~ret)
    {
        return ret;
    }

    if (weight[i] > rem)
    {
        ret = INT_MIN;
    }
    else
    {
        ret = values[i] + solve(i - 1, rem - weight[i], weight, values);
    }

    ret = max(ret, solve(i - 1, rem, weight, values));
    return ret;
}

int main()
{
    int k, n;
    cin >> k >> n;
    vector<int> values(n + 1, 0);
    vector<int> weight(n + 1, 0);
    memset(dp, -1, sizeof(dp));
    for (int i = 1; i < n + 1; ++i)
    {
        cin >> weight[i] >> values[i];
    }
    cout << solve(n, k, weight, values);
    return 0;
}