#include <bits/stdc++.h>
// Almost-All-Divisors

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cases;
    cin >> cases;
    while (cases--)
    {
        int size;
        cin >> size;
        long long arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + size);

        long long numero = arr[0] * arr[size - 1];
        int left = 1, right = size - 2;
        while (left <= right)
        {
            if (numero != arr[left] * arr[right])
            {
                numero = -1;
                break;
            }
            left++;
            right--;
        }

        if (numero != -1)
        {
            int divisors = 0;
            for (long long i = 2; i * i <= numero; i++)
            {
                if (numero % i == 0)
                {
                    divisors++;
                    if (i * i != numero)
                    {
                        divisors++;
                    }
                }
            }
            if (divisors != size)
            {
                numero = -1;
            }
        }
        cout << numero << "\n";
    }
    return 0;
}