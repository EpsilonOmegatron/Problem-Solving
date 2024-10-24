#include <bits/stdc++.h>
#include <iostream>
// One-of-a-Letter

int main()
{
    std::string input;
    std::set<char> unique;
    getline(std::cin, input);
    for (int i = 0; i < input.length(); i++)
    {
        unique.insert(input[i]);
    }
    unique.erase(' ');
    unique.erase(',');
    unique.erase('{');
    unique.erase('}');
    std::cout << unique.size();

    return 0;
}
