#include <bits/stdc++.h>
// Addition-Costs

int main()
{
    int caseSize, input;
    while (std::cin >> caseSize && caseSize != 0)
    {
        int finalResult = 0;
        std::multiset<int> set;
        std::vector<int> sums;
        for (int i = 0; i < caseSize; i++)
        {
            std::cin >> input;
            set.insert(input);
        }
        while (set.size() != 1)
        {
            int addition = *set.begin() + *std::next(set.begin(), 1);
            set.insert(addition);
            sums.push_back(addition);
            set.erase(set.begin());
            set.erase(set.begin());
        }
        for (auto i : sums)
        {
            finalResult += i;
        }

        std::cout << finalResult << std::endl;
    }

    return 0;
}
