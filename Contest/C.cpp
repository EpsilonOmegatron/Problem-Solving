#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        /* code */
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cases, number;
    cin >> cases;
    multiset<int> numbers;
    for (int i = 0; i < cases; i++)
    {
        cin >> number;
        numbers.insert(number);
    }
    
    return 0;
}
