#include <bits/stdc++.h>
using namespace std;
// Jewels

void knapSack(int W, int wt[], int val[], int n)
{
    int i, w;
    int K[n + 1][W + 1];

    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }

    int res = K[n][W];
    int ans = res;

    w = W;
    vector<int> selectedItems;
    for (i = n; i > 0 && res > 0; i--)
    {
        if (res == K[i - 1][w])
            continue;
        else
        {
            selectedItems.push_back(wt[i - 1]);
            res = res - val[i - 1];
            w = w - wt[i - 1];
        }
    }

    for (int i = selectedItems.size() - 1; i >= 0; i--)
    {
        cout << selectedItems[i] << " ";
    }
    cout << "sum:" << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int capacity;
    while (cin >> capacity)
    {
        int num, sum = 0;
        cin >> num;
        int jewels[num];
        for (int i = 0; i < num; i++)
        {
            cin >> jewels[i];
        }
        knapSack(capacity, jewels, jewels, num);
    }
    return 0;
}