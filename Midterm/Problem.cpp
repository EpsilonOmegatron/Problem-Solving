#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return n > 1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        cout << (isPrime(m) ? "YES\n" : "NO\n");
    }

    return 0;
}