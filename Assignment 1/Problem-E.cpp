#include <bits/stdc++.h>
#include <iostream>
// Palindrome Wannabe

int main()
{
    std::string wannabe;
    std::cin >> wannabe;
    for (int i = wannabe.size() - 1; i >= 0; i--)
    {
        if (wannabe[i] == '0')
        {
            wannabe.pop_back();
        }
        else if (wannabe[i] != '0')
        {
            break;
        }
    }
    std::string ebannaw = wannabe;
    std::reverse(ebannaw.begin(), ebannaw.end());
    if (wannabe == ebannaw)
    {
        std::cout << "YES";
    }
    else
        std::cout << "NO";

    return 0;
}
