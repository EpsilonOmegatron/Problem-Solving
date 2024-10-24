#include <bits/stdc++.h>
#include <iostream>
// Quality Over Price

int main()
{
    int n, p, q;
    std::cin >> n;
    bool correctAlex = false;
    for (int i = 0; i < n; i++)
    {
        std::cin >> p >> q;
        if (q > p)
        {
            correctAlex = true;
            break;
        }
        else
            continue;
    }

    if (correctAlex)
    {
        std::cout << "Happy Alex";
    }
    else
    {
        std::cout << "Poor Alex";
    }

    return 0;
}
