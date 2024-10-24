#include <bits/stdc++.h>
// Satisfying-Customers

int main()
{
    int n, queueTotal = 0, satisfied = 0;
    std::cin >> n;
    int customers[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> customers[i];
    }

    std::sort(customers, customers + n);

    for (int i = 0; i < n; i++)
    {
        if (customers[i] >= queueTotal)
        {
            satisfied++;
            queueTotal += customers[i];
        }
    }

    std::cout << satisfied << std::endl;
    return 0;
}