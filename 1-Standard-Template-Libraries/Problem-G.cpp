#include <bits/stdc++.h>
// Fixing-Matrices

int main()
{
    int size, input;
    while (std::cin >> size && size != 0)
    {
        int arr[size][size];
        int invalidRow, invalidColumn;
        int invalidRows = 0, invalidColumns = 0;
        for (int i = 0; i < size; i++)
        {
            int rowSum = 0;
            for (int j = 0; j < size; j++)
            {
                std::cin >> input;
                arr[i][j] = input;
                rowSum += arr[i][j];
            }

            if (rowSum % 2 != 0)
            {
                invalidRow = i;
                invalidRows++;
            }
        }

        for (int i = 0; i < size; i++)
        {
            int columnSum = 0;
            for (int j = 0; j < size; j++)
            {
                columnSum += arr[j][i];
            }
            if (columnSum % 2 != 0)
            {
                invalidColumn = i;
                invalidColumns++;
            }
        }

        if (invalidRows == 1 && invalidColumns == 1)
        {
            std::cout << "Change bit (" << invalidRow + 1 << "," << invalidColumn + 1 << ")" << std::endl;
        }
        else if (invalidRows == 0 && invalidColumns == 0)
        {
            std::cout << "OK" << std::endl;
        }
        else
        {
            std::cout << "Corrupt" << std::endl;
        }
    }
    return 0;
}
