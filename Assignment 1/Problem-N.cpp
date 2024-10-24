#include <bits/stdc++.h>
#include <iostream>
// Shifted-Keyboard

int main()
{

    std::vector<std::string> keyboard = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"};
    std::map<char, char> left, right;
    for (auto &line : keyboard)
    {
        for (int i = 0; i < line.size(); ++i)
        {
            if (i - 1 >= 0)
                left[line[i]] = line[i - 1];
            if (i + 1 < line.size())
                right[line[i]] = line[i + 1];
        }
    }

    char dir;
    std::string s;
    std::cin >> dir >> s;
    for (auto c : s)
    {
        if (dir == 'L')
            std::cout << right[c];
        else
            std::cout << left[c];
    }
}