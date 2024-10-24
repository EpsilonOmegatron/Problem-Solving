#include <bits/stdc++.h>
using namespace std;
// Prime-Gap

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
    vector<int> primes = generatePrimes(1299709);
    int number;
    while (cin >> number && number != 0)
    {
        int left = 0, right = primes.size(), mid;
        while (left < right)
        {
            mid = (left + right) / 2;
            if (primes[mid] < number)
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }
        if (number == primes[right])
        {
            cout << "0\n";
        }
        else
        {
            cout << primes[right] - primes[right - 1] << "\n";
        }
    }
    return 0;
}
