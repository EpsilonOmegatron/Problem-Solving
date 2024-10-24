#include <bits/stdc++.h>
#include <iostream>
// Card-in-Card-out

int main()
{
    int n;
    while (std::cin >> n && n != 0)
    {
        if (n == 1)
        {
            std::cout << "Discarded cards:" << "\nRemaining card: 1" << std::endl;
            continue;
        }
        
        std::deque<int> cards;
        int discarded[n - 1], discardedCount = 0;
        for (int i = 1; i <= n; i++)
        {
            cards.push_back(i);
        }
        while (cards.size() > 1)
        {
            discarded[discardedCount] = cards.front();
            cards.pop_front();
            cards.push_back(cards.front());
            cards.pop_front();
            discardedCount++;
        }
        std::cout << "Discarded cards: " << discarded[0];
        for (int i = 1; i < n - 1; i++)
        {
            std::cout << ", " << discarded[i];
        }
        std::cout << "\nRemaining card: " << cards.front() << std::endl;
    }
}
