#include <bits/stdc++.h>
using namespace std;
// Hotel-Reservations

int main()
{
    int i = 0, left, n, k;
    cin >> n >> k;
    string hotel;
    cin >> hotel;
    while (hotel[i] != '0')
        i++;
    left = i, k++;
    int count = 0, minDistance = 999999999, minRightIndex, minLeftIndex;
    while (left < n)
    {

        if (hotel[left] == '0')
            count++;

        if (count == k)
        {
            if (minDistance > left - i)
            {
                minDistance = left - i;
                minRightIndex = i;
                minLeftIndex = left;

                if (hotel[i] == '0')
                    count--;
                i++;
            }
        }
        left++;
    }
    int ALocation = 0, ahmed = -1;
    for (int i = minRightIndex; i <= minLeftIndex; i++)
        if (hotel[i] == '0')
        {
            ALocation++;
            if (ALocation == ceil(k / 2.0))
            {
                ahmed = i;
            }

            if (ALocation == ceil(k / 2.0) + 1)
            {
                if (abs(i - ceil(minDistance / 2.0)) < abs(ahmed - ceil(minDistance / 2.0)))
                    ahmed = i;
            }
        }
    cout << max(ahmed - minRightIndex, minLeftIndex - ahmed) << endl;
}
