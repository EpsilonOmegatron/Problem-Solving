#include <bits/stdc++.h>
using namespace std;
// White and Red Flowers

long long MOD = 1e9 + 7;
long long dp[(int)1e5 + 5];
int n;
long long ADDMOD(const long long &a1, const long long &a2)
{
    return ((a1 % MOD) + (a2 % MOD) + 1) % MOD;
}

long long solve(long long flowers)
{
    if (flowers == 0)
    {
        return 1;
    }
    if (flowers < 0)
    {
        return 0;
    }
    long long& ret = dp[flowers];
    if (~ret)
    {
        return ret;
    }
    long long opt1 = solve(flowers - n);
    long long opt2 = solve(flowers - 1);
    return ret = ADDMOD(opt1, opt2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int cases;
    cin >> cases >> n;
    memset(dp, -1, sizeof(dp));
    while (cases--)
    {
        long long a, b;
        cin >> a >> b;
        cout << (solve(b) - solve(a - 1) + MOD) % MOD << "\n";
    }
    return 0;
}