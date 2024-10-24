#include <bits/stdc++.h>
#include <iostream>
// Clear-them-All

int main()
{
    int playerPower, enemies, enemyPower, enemyBonus;
    bool winning = true;
    std::multimap<int, int> enemyMap;
    std::cin >> playerPower >> enemies;
    for (int i = 0; i < enemies; i++)
    {
        std::cin >> enemyPower >> enemyBonus;
        enemyMap.insert(std::make_pair(enemyPower, enemyBonus));
    }
    for (auto i : enemyMap)
    {
        if (playerPower < i.first)
        {
            winning = false;
            break;
        }
        playerPower += i.second;
    }
    if (winning)
    {
        std::cout << "YES";
    }
    else
        std::cout << "NO";

    return 0;
}
