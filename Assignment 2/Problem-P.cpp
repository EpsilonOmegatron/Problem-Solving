#include <bits/stdc++.h>
using namespace std;
// Prime-Substring

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

vector<int> generatePrimes(int upTo)
{
    vector<int> primes;
    for (int i = 2; i <= upTo; ++i)
    {
        if (isPrime(i))
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
    vector<int> primes = generatePrimes(100000);
    string number;
    while (cin >> number && number != "0")
    {
        for (int i = primes.size() - 1; i >= 0; i--)
        {
            string prime = to_string(primes[i]);
            if (prime.length() > number.length())
            {
                continue;
            }
            else
            {
                size_t position = number.find(prime);
                if (position != string::npos)
                {
                    cout << prime << "\n";
                    break;
                }
            }
        }
    }

    return 0;
}
