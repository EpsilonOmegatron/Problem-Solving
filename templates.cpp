#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

const int N = 1e7;
bool is_prime[N + 1];
void sieve()
{
    fill(is_prime, is_prime + N, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= N; ++i)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= N; j += i)
                is_prime[j] = false;
        }
    }
}