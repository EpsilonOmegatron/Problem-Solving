#include <bits/stdc++.h>
#include <iostream>
// Names-Enumeration

int main()
{
    int n;
    std::cin >> n;
    std::map<std::string, int> freq;
    for (int i = 0; i < n; ++i)
    {
        std::string username;
        std::cin >> username;

        int &num = freq[username];
        if (num == 0)
            std::cout << "OK" << std::endl;
        else
            std::cout << username << num << "\n";

        ++num;
    }
}