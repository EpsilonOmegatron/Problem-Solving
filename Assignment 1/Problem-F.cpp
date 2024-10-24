#include <bits/stdc++.h>
// Gap-Sums

int main()
{
    int rows;
    while (std::cin >> rows && rows != 0)
    {
        char letter;
        int numX, maxLength = 0;
        std::vector<int> caseAnswers(rows);
        for (int i = 0; i < rows; ++i)
        {
            std::cin >> letter;
            numX = 0;
            for (int j = 0; j < 25; ++j)
            {
                std::cin.read(&letter, 1);
                if (letter == 'X')
                    numX++;
            }
            maxLength = std::max(numX, maxLength);
            caseAnswers[i] = numX;
        }
        int voidSpaces = 0;
        for (int i = 0; i < rows; ++i)
            voidSpaces += maxLength - caseAnswers[i];
        std::cout << voidSpaces << std::endl;
    }
    return 0;
}

/*
#include <bits/stdc++.h>
#include <iostream>
// Gap Sums

int main()
{
    int n;
    std::vector<int> finalGapCount;
    while (std::cin >> n && n != 0)
    {
        int lineGapCounts[n];
        for (int i = 0; i < n; i++)
        {
            std::string line;
            int gapCount = 0;
            std::cin >> line;
            for (int i = 0; i < 25; i++)
            {
                if (line[i] == 'B')
                {
                    gapCount++;
                }
            }
            lineGapCounts[i] = gapCount;
        }
        std::sort(lineGapCounts, lineGapCounts + n);

        int lineGaps = 0;
        for (int i = 0; i < n; i++)
        {
            if (lineGapCounts[n - 1] != lineGapCounts[i] && n > 1)
            {
                lineGaps += lineGapCounts[n - 1] - lineGapCounts[i];
            }
        }
        finalGapCount.push_back(lineGaps);
    }

    for (int i = 0; i < finalGapCount.size(); i++)
    {
        std::cout << finalGapCount[i] << std::endl;
    }
    return 0;
}
*/