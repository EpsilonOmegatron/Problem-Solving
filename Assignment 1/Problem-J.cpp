#include <bits/stdc++.h>
// Pricey-Words

int main()
{
    int mapSize, descSize, price;
    std::string word, desc;
    std::cin >> mapSize >> descSize;
    std::map<std::string, int> dictionary;
    for (int i = 0; i < mapSize; i++)
    {
        std::cin >> word >> price;
        dictionary.insert({word, price});
    }
    for (int i = 0; i < descSize; i++)
    {
        int total = 0;
        while (std::cin >> desc && desc != ".")
        {
            if (dictionary.find(desc) != dictionary.end())
            {
                total += dictionary.find(desc)->second;
            }
        }
        std::cout << total << std::endl;
    }

    return 0;
}