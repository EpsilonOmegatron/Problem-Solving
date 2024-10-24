#include <bits/stdc++.h>
using namespace std;
// Twin-Primes

const long long N = 1e8;
bool is_prime[N + 1];
vector<long long> sieve()
{
    vector<long long> primes;
    fill(is_prime, is_prime + N, true);
    is_prime[0] = is_prime[1] = false;
    for (long long i = 2; i <= N; ++i)
    {
        if (is_prime[i])
        {
            for (long long j = i * i; j <= N; j += i)
                is_prime[j] = false;
        }
        if (is_prime[i] && is_prime[i + 2])
        {
            primes.push_back(i);
        }
    }
    return primes;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long> primes = sieve();
    int value;
    while (cin >> value)
    {
        value--;
        cout << "(" << primes[value] << ", " << primes[value] + 2 << ")" << "\n";
    }
    return 0;
}