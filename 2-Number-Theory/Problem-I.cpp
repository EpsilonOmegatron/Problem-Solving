#include <bits/stdc++.h>
using namespace std;
// Prime-Factor-of-LCM

const int N = 1e6;
bool is_prime[N + 1];
vector<long long> sieve()
{
    fill(is_prime, is_prime + N, true);
    is_prime[0] = is_prime[1] = false;
    vector<long long> primes;
    for (int i = 2; i <= N; ++i)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
            for (int j = i; j <= N; j += i)
                is_prime[j] = false;
        }
    }
    return primes;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cases;
    cin >> cases;
    int currentCase = 1;
    vector<long long> primes = sieve();
    while (cases--)
    {
        int size;
        cin >> size;
        set<long long> factors;
        long long num;
        for (int i = 0; i < size; i++)
        {
            cin >> num;
            for (auto i : primes)
            {
                if (num == 1)
                {
                    break;
                }
                while (num % i == 0)
                {
                    factors.insert(i);
                    num /= i;
                }
            }
            if (num > 1)
                factors.insert(num);
        }

        cout << "Case #" << currentCase << ": " << factors.size() << "\n";
        for (auto i : factors)
        {
            cout << i << "\n";
        }
        cout << "\n";
        currentCase++;
    }
    return 0;
}