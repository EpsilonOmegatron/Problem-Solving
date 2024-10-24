#include <bits/stdc++.h>
using namespace std;
// Least-Prime-Divisor

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long input;
    while (cin >> input && input)
    {
        bool found = 0;
        if (input % 2 == 0)
        {
            cout << 2;
            continue;
        }

        for (long long i = 3; i * i <= input; i += 2)
        {
            if (input % i == 0)
            {
                cout << i << "\n";
                found = 1;
                break;
            }
        }
        if (!found)
        {
            cout << input << "\n";
        }
    }
    return 0;
}
