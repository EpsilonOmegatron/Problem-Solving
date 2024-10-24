#include <bits/stdc++.h>
// Absolute Differences

int main()
{
    int size;
    std::vector<bool> isJolly;
    while (std::cin >> size)
    {
        std::vector<int> difference;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            int element;
            std::cin >> element;
            arr[i] = element;
            if (i >= 1)
                difference.push_back(abs(arr[i - 1] - arr[i]));
        }
        std::sort(difference.begin(), difference.end());
        int i;
        for (i = 0; i < size - 1; i++)
            if (difference[i] != i + 1)
            {
                isJolly.push_back(false);
                break;
            }

        if (i == size - 1)
            isJolly.push_back(true);
    }

    for (int i = 0; i < isJolly.size(); i++)
    {
        if (isJolly[i] == true)
        {
            std::cout << "Jolly\n";
        }
        else
            std::cout << "Not jolly\n";
    }
    return 0;
}