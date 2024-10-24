#include <bits/stdc++.h>
using namespace std;
// Sum-of-Consecutive-Prime-Numbers

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
    vector<int> primes = generatePrimes(10000);
    map<int, int> sums;
    for (int i = 0; i < primes.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < primes.size(); j++)
        {
            sum = sum + primes[j];
            sums[sum] = sums[sum] + 1;
        }
    }
    
    int num;
    while (cin >> num && num != 0)
    {
        cout << sums[num] << "\n";
    }
    return 0;
}
