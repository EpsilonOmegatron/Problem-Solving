#include <bits/stdc++.h>
#include <iostream>
// Smallestn't

int main()
{
    int size;
    int element;
    std::cin >> size;
    std::set<int> elements;
    for (int i = 0; i < size; i++)
    {
        std::cin >> element;
        elements.insert(element);
    }

    if (elements.size() == 1)
    {
        std::cout << "NO";
    }
    else
        std::cout << *std::next(elements.begin(), 1);

    return 0;
}
