#include <bits/stdc++.h>
// Rebuild-The-Heap

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int operationNum, input;
    std::string operation;
    std::multiset<int> set;
    std::vector<std::pair<std::string, int>> finalOperations;
    std::cin >> operationNum;
    for (int i = 0; i < operationNum; i++)
    {
        std::cin >> operation;
        if (operation == "insert")
        {
            std::cin >> input;
            set.insert(input);
            finalOperations.push_back({operation, input});
        }
        else if (operation == "removeMin")
        {
            if (set.empty())
            {
                finalOperations.push_back({"insert", 0});
                finalOperations.push_back({operation, 0});
            }
            else
            {
                set.erase(set.begin());
                finalOperations.push_back({operation, 0});
            }
        }
        else if (operation == "getMin")
        {
            std::cin >> input;
            if (set.find(input) == set.end())
            {
                set.insert(input);
                finalOperations.push_back({"insert", input});
            }
            while (*set.begin() != input)
            {
                set.erase(set.begin());
                finalOperations.push_back({"removeMin", 0});
            }
            finalOperations.push_back({operation, *set.begin()});
        }
    }
    std::cout << finalOperations.size() << std::endl;
    for (auto i : finalOperations)
    {
        if (i.first == "removeMin")
        {
            std::cout << i.first << std::endl;
            continue;
        }
        std::cout << i.first << " " << i.second << std::endl;
    }
    return 0;
}
