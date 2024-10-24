#include <bits/stdc++.h>
#include <iostream>
// It-Takes-Two

int main()
{
    int levelCount, littleSkill, littleLevel;
    std::cin >> levelCount;
    std::set<int> littleSkills;
    while (std::cin >> littleSkill)
    {
        for (int i = 0; i < littleSkill; i++)
        {
            std::cin >> littleLevel;
            littleSkills.insert(littleLevel);
        }
    }
    if (littleSkills.size() != levelCount)
    {
        std::cout << "Oh, my keyboard!";
    }
    else
    {
        std::cout << "I become the guy.";
    }

    return 0;
}
