#include <bits/stdc++.h>
using namespace std;
// Signal-Stations

int main()
{
    int houseNum, stationNum;
    cin >> houseNum >> stationNum;
    int houses[houseNum], stations[stationNum];
    for (int i = 0; i < houseNum; i++)
    {
        cin >> houses[i];
    }
    for (int i = 0; i < stationNum; i++)
    {
        cin >> stations[i];
    }
    int l = 0, r = 0, currDis = INT_MAX, maxDis = INT_MIN;
    while (l < houseNum)
    {
        while (r < stationNum && abs(houses[l] - stations[r]) <= currDis)
        {
            currDis = abs(houses[l] - stations[r]);
            r++;
        }
        maxDis = max(maxDis, currDis);
        currDis = INT_MAX;
        l++; r--;
    }
    cout << maxDis;
    return 0;
}
