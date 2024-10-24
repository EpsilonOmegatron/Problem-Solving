#include <bits/stdc++.h>
using namespace std;
// Caesar's Legions

long long dp[101][101][11][11];
long long footmen, horsemen, footForm, horseForm;
const long long MOD = 1e8;

long long ADDMOD(const long long &a1, const long long &a2)
{
    return ((a1 % MOD) + (a2 % MOD)) % MOD;
}

long long solve(long long footmen, long long horsemen, long long footMenNum, long long horseMenNum)
{

    if (footmen == 0 && horsemen == 0)
    {
        return 1;
    }
    long long &ret = dp[footmen][horsemen][footMenNum][horseMenNum];
    if (~ret)
    {
        return ret;
    }
    long long opt1 = 0, opt2 = 0;
    if (footmen > 0 && footMenNum > 0)
    {
        opt1 = solve(footmen - 1, horsemen, footMenNum - 1, horseForm);
    }
    if (horsemen > 0 && horseMenNum > 0)
    {
        opt2 = solve(footmen, horsemen - 1, footForm, horseMenNum - 1);
    }
    return ret = ADDMOD(opt1, opt2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> footmen >> horsemen >> footForm >> horseForm;
    memset(dp, -1, sizeof dp);
    cout << solve(footmen, horsemen, footForm, horseForm);
    return 0;
}