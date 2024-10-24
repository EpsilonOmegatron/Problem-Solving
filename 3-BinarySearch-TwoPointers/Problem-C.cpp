#include <bits/stdc++.h>
using namespace std;
// Ahmed and Belal

int main()
{
    int a, b, belal;
    cin >> a >> b;
    int ahmed[a], ahmedstupid[b];
    for (int i = 0; i < a; i++)
    {
        cin >> ahmed[i];
    }
    sort(ahmed, ahmed + a);

    for (int i = 0; i < b; i++)
    {
        cin >> belal;
        int left = 0, right = a - 1, mid, count = 0;
        while (left <= right)
        {
            mid = (left + right) / 2;
            if (ahmed[mid] <= belal)
            {
                count = mid + 1;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        ahmedstupid[i] = count;
    }

    cout << ahmedstupid[0];
    for (int i = 1; i < b; i++)
    {
        cout << " " << ahmedstupid[i];
    }

    return 0;
}