#include <bits/stdc++.h>
using namespace std;
// Imperial-Units

long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cases;
    while (cin >> cases && cases != -1)
    {
        cases--;
        long long denom = 1, numer = 1, unit, unit2;
        while (cases)
        {
            cin >> unit >> unit2;
            denom *= unit;
            numer *= unit2;
            cases--;
        }
        long long GCD = gcd(denom, numer);
        denom /= GCD;
        numer /= GCD;
        cout << denom << " " << numer << "\n";
    }

    return 0;
}
