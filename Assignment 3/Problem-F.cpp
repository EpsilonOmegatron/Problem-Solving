#include <bits/stdc++.h>
using namespace std;
#define int2 long long
// Sarah-and-Shopping

int main()
{
    int2 maxItems, budget;
    cin >> maxItems >> budget;
    int2 items[maxItems], itemCalc[maxItems];
    for (int2 i = 0; i < maxItems; i++)
    {
        cin >> items[i];
    }
    int2 left = 0, right = maxItems, mid, maxBuy, minCost;
    while (left <= right)
    {
        mid = (left + right) / 2;
        int2 sum = 0;
        for (int2 i = 0; i < maxItems; i++)
        {
            itemCalc[i] = items[i] + ((i + 1) * mid);
        }
        sort(itemCalc, itemCalc + maxItems);

        for (int2 i = 0; i < mid; i++)
        {
            sum += itemCalc[i];
        }
        if (sum <= budget)
        {
            maxBuy = mid;
            minCost = sum;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    cout << maxBuy << " " << minCost;
    return 0;
}
