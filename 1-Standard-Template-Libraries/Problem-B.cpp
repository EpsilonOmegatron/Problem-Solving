#include <bits/stdc++.h>
// Rectangles

int main()
{
    int W, H, N;
    while (std::cin >> W >> H >> N, W != 0)
    {
        std::vector<std::vector<int>> board(W, std::vector<int>(H, 0));
        int emptySpots = W * H;
        for (int i = 0; i < N; ++i)
        {
            int X1, Y1, X2, Y2;
            std::cin >> X1 >> Y1 >> X2 >> Y2;
            for (int x = std::min(X1, X2) - 1; x <= std::max(X1, X2) - 1; ++x)
                for (int y = std::min(Y1, Y2) - 1; y <= std::max(Y1, Y2) - 1; ++y)
                {
                    if (board[x][y] == 0)
                    {
                        --emptySpots;
                        board[x][y] = 1;
                    }
                }
        }
        if (emptySpots == 0)
            std::cout << "There is no empty spots." << std::endl;
        else if (emptySpots == 1)
            std::cout << "There is one empty spot." << std::endl;
        else
            std::cout << "There are " << emptySpots << " empty spots." << std::endl;
    }
    return 0;
}