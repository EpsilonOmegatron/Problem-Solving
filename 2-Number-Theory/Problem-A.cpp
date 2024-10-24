#include <bits/stdc++.h>
using namespace std;
// Counting-Bits

int main()
{
    int T, N;
    cin >> T;
    while (T)
    {
        int bits = 0;
        cin >> N;
        for (int i = 0; i < N;)
        {
            int n = N;
            while (n > 0)
            {
                if (n % 2 == 1)
                {
                    bits++;
                }
                n = n / 2;
            }
            N--;
        }
        cout << bits << endl;
        T--;
    }

    return 0;
}
