#include <bits/stdc++.h>
// Name-Changer

int main()
{
    int requests;
    std::string oldName, newName;
    std::cin >> requests;
    std::map<std::string, std::string> names;
    for (int i = 0; i < requests; i++)
    {
        std::cin >> oldName >> newName;
        if (names.find(oldName) == names.end())
        {
            names.insert({newName, oldName});
            continue;
        }
        names.insert({newName, names.find(oldName)->second});
        names.erase(names.find(oldName));
    }
    std::cout << names.size() << std::endl;
    for (auto i : names)
    {
        std::cout << i.second << " " << i.first << std::endl;
    }

    return 0;
}
