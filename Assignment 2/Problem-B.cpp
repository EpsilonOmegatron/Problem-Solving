#include <bits/stdc++.h>
using namespace std;
// Coder-First-Problem

int recurse(int x)
{
    if (x <= 2)
        return x;
    if (x % 2 == 0)
        return 2 + recurse(x / 2);
    return 0;
}

int main()
{
    int x;
    cin >> x;
    cout << recurse(x);
    return 0;
}

