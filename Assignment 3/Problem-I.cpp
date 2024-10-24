#include <bits/stdc++.h>
using namespace std;
// Prime-Factor-of-LCM

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int lcmArray(int numbers[], int size)
{
    int result = numbers[0];

    for (int i = 1; i < size; ++i)
    {
        result = lcm(result, numbers[i]);
    }

    return result;
}

set<int> factorize(int num)
{
    set<int> factors;
    for (int i = 2; i <= num; ++i)
    {
        while (num % i == 0)
        {
            num /= i;
            factors.insert(i);
        }
    }
    return factors;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cases, currentCase = 1;
    cin >> cases;
    while (cases--)
    {
        int size;
        cin >> size;
        int numbers[size];
        for (int i = 0; i < size; i++)
        {
            cin >> numbers[i];
        }
        int LCM = lcmArray(numbers, size);
        set<int> factors = factorize(LCM);
        cout << "Case #" << currentCase << ": " << factors.size() << "\n";
        for (auto i : factors)
        {
            cout << i << "\n";
        }
        currentCase++;
    }
    return 0;
}