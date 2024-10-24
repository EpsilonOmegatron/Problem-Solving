#include <bits/stdc++.h>
using namespace std;

int main()
{
    long input;
    while (cin >> input && input != 0)
    {
        int b = 2;
        while (fmod(log(input) / log(b), 1) != 0)
        {
            b++;
        }
        cout << log(input) / log(b) << endl;
    }
    return 0;
}