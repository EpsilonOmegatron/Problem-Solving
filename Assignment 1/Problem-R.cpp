#include <bits/stdc++.h>
using namespace std;
// Sum/Power-of-Two

int main()
{
    int size;
    cin >> size;
    vector<long long> numbers(size);
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    long long powers[32] = {0};
    for (int i = 0; i < 32; ++i)
    {
        powers[i] = (1LL << i);
    }

    map<long long, long long> frequency;
    long long result = 0;
    for (long long i : numbers)
    {
        for (int j = 0; j < 32; j++)
        {
            long long value = powers[j] - i;
            if (value >= 0)
            {
                result += frequency[value];
            }
        }
        frequency[i]++;
    }
    cout << result;
    return 0;
}